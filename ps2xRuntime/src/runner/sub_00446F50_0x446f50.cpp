#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00446F50
// Address: 0x446f50 - 0x447328
void sub_00446F50_0x446f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446F50_0x446f50");
#endif

    switch (ctx->pc) {
        case 0x446fb8u: goto label_446fb8;
        case 0x4471f8u: goto label_4471f8;
        case 0x447218u: goto label_447218;
        case 0x4472a8u: goto label_4472a8;
        case 0x4472ecu: goto label_4472ec;
        default: break;
    }

    ctx->pc = 0x446f50u;

label_446f50:
    // 0x446f50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x446f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x446f54: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x446f54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x446f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x446f5c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x446f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x446f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x446f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f64: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x446f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x446f68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x446f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x446f6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x446f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x446f70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x446f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x446f74: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x446f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x446f78: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x446f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x446f7c: 0x120a00b8  beq         $s0, $t2, . + 4 + (0xB8 << 2)
    ctx->pc = 0x446F7Cu;
    {
        const bool branch_taken_0x446f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x446F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446F7Cu;
        // 0x446f80: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f7c) {
            ctx->pc = 0x447260u;
            goto label_447260;
        }
    }
    ctx->pc = 0x446F84u;
    // 0x446f84: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x446f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x446f88: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x446f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x446f8c: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x446f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x446f90: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x446f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x446f94: 0x1432818  mult        $a1, $t2, $v1
    ctx->pc = 0x446f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x446f98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x446f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x446f9c: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x446f9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x446fa0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x446fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x446fa4: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x446fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x446fa8: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x446fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446fac: 0x25090080  addiu       $t1, $t0, 0x80
    ctx->pc = 0x446facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x446fb0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x446fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446fb4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x446fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_446fb8:
    // 0x446fb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x446fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x446fbc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x446fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x446fc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x446fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x446fc4: 0xe9202b  sltu        $a0, $a3, $t1
    ctx->pc = 0x446fc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x446fc8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x446fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x446fcc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x446fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x446fd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x446fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x446fd4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x446fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x446fd8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x446fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x446fdc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x446fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x446fe0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x446fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x446fe4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x446fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x446fe8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x446fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x446fec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x446fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x446ff0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x446ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x446ff4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x446ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x446ff8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x446ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x446ffc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x446ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x447000: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x447000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x447004: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x447004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x447008: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x447008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x44700c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x44700cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x447010: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x447010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x447014: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x447014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x447018: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x447018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x44701c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x44701cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x447020: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x447020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x447024: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x447024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x447028: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x447028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x44702c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x44702cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x447030: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x447030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x447034: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x447034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x447038: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x447038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x44703c: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x44703cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x447040: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x447040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x447044: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x447044u;
    {
        const bool branch_taken_0x447044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x447048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447044u;
        // 0x447048: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447044) {
            ctx->pc = 0x446FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446fb8;
        }
    }
    ctx->pc = 0x44704Cu;
    // 0x44704c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x44704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x447050: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x447050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x447054: 0x2043818  mult        $a3, $s0, $a0
    ctx->pc = 0x447054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x447058: 0x1a42018  mult        $a0, $t5, $a0
    ctx->pc = 0x447058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44705c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x44705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x447060: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x447060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x447064: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x447064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x447068: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x447068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44706c: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x44706cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x447070: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x447070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x447074: 0xac4c0008  sw          $t4, 0x8($v0)
    ctx->pc = 0x447074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 12));
    // 0x447078: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x447078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44707c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x44707cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x447080: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x447080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x447084: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x447084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447088: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x447088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44708c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x44708cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x447090: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x447090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x447094: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x447094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x447098: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x447098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x44709c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x44709cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4470a0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x4470a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4470a4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x4470a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x4470a8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4470a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4470ac: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4470acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4470b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4470b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4470b4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4470b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4470b8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4470b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4470bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4470bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4470c0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4470c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4470c4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4470c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4470c8: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4470c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4470cc: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x4470ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x4470d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4470d4: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x4470d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x4470d8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4470d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4470dc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4470dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4470e0: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x4470e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4470e4: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x4470e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4470e8: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x4470e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4470ec: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x4470ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4470f0: 0x686b001f  ldl         $t3, 0x1F($v1)
    ctx->pc = 0x4470f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4470f4: 0x6c6b0018  ldr         $t3, 0x18($v1)
    ctx->pc = 0x4470f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4470f8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x4470f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4470fc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x4470fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447100: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x447100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447104: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x447104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447108: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x447108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44710c: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x44710cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447110: 0xb3ab002f  sdl         $t3, 0x2F($sp)
    ctx->pc = 0x447110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447114: 0xb7ab0028  sdr         $t3, 0x28($sp)
    ctx->pc = 0x447114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447118: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x447118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44711c: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x44711cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x447120: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x447120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447124: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x447124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447128: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x447128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x44712c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x44712cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x447130: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x447130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x447134: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x447134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x447138: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x447138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x44713c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x44713cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x447140: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x447140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x447144: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x447144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x447148: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x447148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x44714c: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x44714cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x447150: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x447150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x447154: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x447154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447158: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x447158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44715c: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x44715cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447160: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x447160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447164: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x447164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447168: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x447168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x44716c: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x44716cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447170: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x447170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447174: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x447174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x447178: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x447178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x44717c: 0xb0e30027  sdl         $v1, 0x27($a3)
    ctx->pc = 0x44717cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447180: 0xb4e30020  sdr         $v1, 0x20($a3)
    ctx->pc = 0x447180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x447184: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x447184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x447188: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x447188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x44718c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x44718cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x447190: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x447190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x447194: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x447194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x447198: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x447198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x44719c: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x44719cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4471a0: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x4471a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4471a4: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x4471a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4471a8: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x4471a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4471ac: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x4471acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4471b0: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x4471b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471b4: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x4471b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471b8: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x4471b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471bc: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x4471bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471c0: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x4471c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471c4: 0xb4830010  sdr         $v1, 0x10($a0)
    ctx->pc = 0x4471c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471c8: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x4471c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471cc: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x4471ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471d0: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x4471d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4471d4: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x4471d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4471d8: 0xb08b0027  sdl         $t3, 0x27($a0)
    ctx->pc = 0x4471d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471dc: 0xb48b0020  sdr         $t3, 0x20($a0)
    ctx->pc = 0x4471dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4471e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4471e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4471e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4471e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4471e8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4471E8u;
    {
        const bool branch_taken_0x4471e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4471ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4471E8u;
        // 0x4471ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4471e8) {
            ctx->pc = 0x447260u;
            goto label_447260;
        }
    }
    ctx->pc = 0x4471F0u;
    // 0x4471f0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x4471f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4471f4: 0x1272018  mult        $a0, $t1, $a3
    ctx->pc = 0x4471f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4471f8:
    // 0x4471f8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4471f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4471fc: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x4471fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x447200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x447200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x447204: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x447204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x447208: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x447208u;
    {
        const bool branch_taken_0x447208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447208u;
        // 0x44720c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447208) {
            ctx->pc = 0x447248u;
            goto label_447248;
        }
    }
    ctx->pc = 0x447210u;
    // 0x447210: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x447210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x447214: 0x0  nop
    ctx->pc = 0x447214u;
    // NOP
label_447218:
    // 0x447218: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x447218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44721c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44721Cu;
    {
        const bool branch_taken_0x44721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x44721c) {
            ctx->pc = 0x44722Cu;
            goto label_44722c;
        }
    }
    ctx->pc = 0x447224u;
    // 0x447224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x447224u;
    {
        const bool branch_taken_0x447224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447224u;
        // 0x447228: 0xac8a0000  sw          $t2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447224) {
            ctx->pc = 0x447234u;
            goto label_447234;
        }
    }
    ctx->pc = 0x44722Cu;
label_44722c:
    // 0x44722c: 0x504a0001  beql        $v0, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x44722Cu;
    {
        const bool branch_taken_0x44722c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x44722c) {
            ctx->pc = 0x447230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44722Cu;
            // 0x447230: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447234u;
            goto label_447234;
        }
    }
    ctx->pc = 0x447234u;
label_447234:
    // 0x447234: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x447234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x447238: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x447238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x44723c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x44723cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x447240: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x447240u;
    {
        const bool branch_taken_0x447240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447240u;
        // 0x447244: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447240) {
            ctx->pc = 0x447218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447218;
        }
    }
    ctx->pc = 0x447248u;
label_447248:
    // 0x447248: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x447248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x44724c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x44724cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447250: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x447250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x447254: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x447254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x447258: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x447258u;
    {
        const bool branch_taken_0x447258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447258u;
        // 0x44725c: 0x1272018  mult        $a0, $t1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x447258) {
            ctx->pc = 0x4471F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4471f8;
        }
    }
    ctx->pc = 0x447260u;
label_447260:
    // 0x447260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x447260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x447264: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x447264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x447268: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x447268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x44726c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x44726cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x447270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447274: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x447274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x447278: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x447278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x44727c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x44727cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x447280: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x447280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x447284: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x447284u;
    {
        const bool branch_taken_0x447284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447284u;
        // 0x447288: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447284) {
            ctx->pc = 0x447304u;
            goto label_447304;
        }
    }
    ctx->pc = 0x44728Cu;
    // 0x44728c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x44728Cu;
    {
        const bool branch_taken_0x44728c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44728Cu;
        // 0x447290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44728c) {
            ctx->pc = 0x447300u;
            goto label_447300;
        }
    }
    ctx->pc = 0x447294u;
    // 0x447294: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x447294u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x447298: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x447298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x44729c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x44729cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4472a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4472a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4472a4: 0x0  nop
    ctx->pc = 0x4472a4u;
    // NOP
label_4472a8:
    // 0x4472a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4472a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4472ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4472acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4472b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4472b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4472b4: 0x10d3000d  beq         $a2, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x4472B4u;
    {
        const bool branch_taken_0x4472b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        ctx->pc = 0x4472B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4472B4u;
        // 0x4472b8: 0xd52818  mult        $a1, $a2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4472b4) {
            ctx->pc = 0x4472ECu;
            goto label_4472ec;
        }
    }
    ctx->pc = 0x4472BCu;
    // 0x4472bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4472bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4472c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4472c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4472c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4472c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4472c8: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4472c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4472cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4472ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4472d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4472d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4472d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4472d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4472d8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4472D8u;
    {
        const bool branch_taken_0x4472d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4472DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4472D8u;
        // 0x4472dc: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4472d8) {
            ctx->pc = 0x4472ECu;
            goto label_4472ec;
        }
    }
    ctx->pc = 0x4472E0u;
    // 0x4472e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4472e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4472e4: 0xc111bd4  jal         func_446F50
    ctx->pc = 0x4472E4u;
    SET_GPR_U32(ctx, 31, 0x4472ECu);
    ctx->pc = 0x4472E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4472E4u;
    // 0x4472e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446F50u;
    goto label_446f50;
    ctx->pc = 0x4472ECu;
label_4472ec:
    // 0x4472ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4472ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4472f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4472f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4472f4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4472f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4472f8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4472F8u;
    {
        const bool branch_taken_0x4472f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4472FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4472F8u;
        // 0x4472fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4472f8) {
            ctx->pc = 0x4472A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4472a8;
        }
    }
    ctx->pc = 0x447300u;
label_447300:
    // 0x447300: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x447300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_447304:
    // 0x447304: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x447304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x447308: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x447308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44730c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x44730cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x447310: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x447310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x447314: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x447314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x447318: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x447318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44731c: 0x3e00008  jr          $ra
    ctx->pc = 0x44731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44731Cu;
        // 0x447320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447324u;
    // 0x447324: 0x0  nop
    ctx->pc = 0x447324u;
    // NOP
    ctx->pc = 0x447328u;
}
