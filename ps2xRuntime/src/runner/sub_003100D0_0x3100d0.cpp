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

// Function: sub_003100D0
// Address: 0x3100d0 - 0x3101d8
void sub_003100D0_0x3100d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003100D0_0x3100d0");
#endif

    switch (ctx->pc) {
        case 0x310100u: goto label_310100;
        case 0x31018cu: goto label_31018c;
        case 0x3101bcu: goto label_3101bc;
        default: break;
    }

    ctx->pc = 0x3100d0u;

    // 0x3100d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3100d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3100d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3100d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100d8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3100d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3100dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3100dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3100e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3100e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3100e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3100e8: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x3100e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x3100ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3100ECu;
    {
        const bool branch_taken_0x3100ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100ECu;
        // 0x3100f0: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100ec) {
            ctx->pc = 0x310108u;
            goto label_310108;
        }
    }
    ctx->pc = 0x3100F4u;
    // 0x3100f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3100f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x3100f8: 0xc0c0212  jal         func_300848
    ctx->pc = 0x3100F8u;
    SET_GPR_U32(ctx, 31, 0x310100u);
    ctx->pc = 0x3100FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3100F8u;
    // 0x3100fc: 0x2484b628  addiu       $a0, $a0, -0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x3100F8u, 0x310100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310100u;
label_310100:
    // 0x310100: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x310100u;
    {
        const bool branch_taken_0x310100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310100u;
        // 0x310104: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310100) {
            ctx->pc = 0x3101C0u;
            goto label_3101c0;
        }
    }
    ctx->pc = 0x310108u;
label_310108:
    // 0x310108: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x310108u;
    {
        const bool branch_taken_0x310108 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x310108) {
            ctx->pc = 0x31010Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310108u;
            // 0x31010c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310158u;
            goto label_310158;
        }
    }
    ctx->pc = 0x310110u;
    // 0x310110: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x310110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310114: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x310114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x310118: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x310118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31011c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x31011cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x310120: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x310120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x310124: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x310124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x310128: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x310128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x31012c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x31012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x310130: 0x68c20017  ldl         $v0, 0x17($a2)
    ctx->pc = 0x310130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x310134: 0x6cc20010  ldr         $v0, 0x10($a2)
    ctx->pc = 0x310134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x310138: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x310138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31013c: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x31013cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x310140: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x310140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310144: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x310144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310148: 0xb3a30023  sdl         $v1, 0x23($sp)
    ctx->pc = 0x310148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31014c: 0xb7a3001c  sdr         $v1, 0x1C($sp)
    ctx->pc = 0x31014cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x310150u;
    {
        const bool branch_taken_0x310150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310150u;
        // 0x310154: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310150) {
            ctx->pc = 0x31016Cu;
            goto label_31016c;
        }
    }
    ctx->pc = 0x310158u;
label_310158:
    // 0x310158: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x310158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31015c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x31015cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x310160: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x310160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x310164: 0xa3a00014  sb          $zero, 0x14($sp)
    ctx->pc = 0x310164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x310168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31016c:
    // 0x31016c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31016cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310170: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x310170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x310174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x310174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310178: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x310178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31017c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310180: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x310180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x310184: 0xc0bdf9e  jal         func_2F7E78
    ctx->pc = 0x310184u;
    SET_GPR_U32(ctx, 31, 0x31018Cu);
    ctx->pc = 0x310188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310184u;
    // 0x310188: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7E78u, 0x310184u, 0x31018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31018Cu;
label_31018c:
    // 0x31018c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31018cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310190: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x310190u;
    {
        const bool branch_taken_0x310190 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x310194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310190u;
        // 0x310194: 0x3c030061  lui         $v1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310190) {
            ctx->pc = 0x3101C0u;
            goto label_3101c0;
        }
    }
    ctx->pc = 0x310198u;
    // 0x310198: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x310198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x31019c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x31019cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3101a0: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x3101a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x3101a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3101a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3101a8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3101a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3101ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3101acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3101b0: 0xacb10010  sw          $s1, 0x10($a1)
    ctx->pc = 0x3101b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 17));
    // 0x3101b4: 0xc0c417e  jal         func_3105F8
    ctx->pc = 0x3101B4u;
    SET_GPR_U32(ctx, 31, 0x3101BCu);
    ctx->pc = 0x3101B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3101B4u;
    // 0x3101b8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3105F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3105F8u, 0x3101B4u, 0x3101BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101BCu;
label_3101bc:
    // 0x3101bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3101bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3101c0:
    // 0x3101c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3101c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3101c4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3101c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3101c8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3101c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3101cc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3101ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3101d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3101D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3101D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101D0u;
        // 0x3101d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3101D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3101D8u;
}
