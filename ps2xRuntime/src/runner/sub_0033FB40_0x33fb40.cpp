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

// Function: sub_0033FB40
// Address: 0x33fb40 - 0x33ffd8
void sub_0033FB40_0x33fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FB40_0x33fb40");
#endif

    switch (ctx->pc) {
        case 0x33fba0u: goto label_33fba0;
        case 0x33fcd8u: goto label_33fcd8;
        case 0x33fd4cu: goto label_33fd4c;
        case 0x33fd58u: goto label_33fd58;
        case 0x33fe30u: goto label_33fe30;
        case 0x33fe5cu: goto label_33fe5c;
        case 0x33fe74u: goto label_33fe74;
        default: break;
    }

    ctx->pc = 0x33fb40u;

    // 0x33fb40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x33fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x33fb44: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x33fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x33fb48: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x33fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x33fb4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb50: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x33fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x33fb54: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x33fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x33fb58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33fb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb5c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x33fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x33fb60: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x33fb60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb64: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x33fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x33fb68: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x33fb68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb6c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x33fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x33fb70: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x33fb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x33fb74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x33fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x33fb78: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x33fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x33fb7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33fb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33fb80: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x33fb80u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x33fb84: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x33fb84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x33fb88: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x33fb88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x33fb8c: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x33fb8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x33fb90: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x33fb90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x33fb94: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x33fb94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x33fb98: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33FB98u;
    SET_GPR_U32(ctx, 31, 0x33FBA0u);
    ctx->pc = 0x33FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB98u;
    // 0x33fb9c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33FB98u, 0x33FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBA0u;
label_33fba0:
    // 0x33fba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fba4: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fba8: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x33fba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x33fbac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33fbb0: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x33fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33fbb4: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x33fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C294u));
    // 0x33fbb8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x33fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C234u));
    // 0x33fbbc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x33fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C224u));
    // 0x33fbc0: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x33fbc0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33fbc4: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x33fbc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33fbc8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x33fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x33fbcc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x33fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x33fbd0: 0x105a021  addu        $s4, $t0, $a1
    ctx->pc = 0x33fbd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33fbd4: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x33fbd4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x33fbd8: 0x10e000ec  beqz        $a3, . + 4 + (0xEC << 2)
    ctx->pc = 0x33FBD8u;
    {
        const bool branch_taken_0x33fbd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBD8u;
        // 0x33fbdc: 0x86a80a  movz        $s5, $a0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbd8) {
            ctx->pc = 0x33FF8Cu;
            goto label_33ff8c;
        }
    }
    ctx->pc = 0x33FBE0u;
    // 0x33fbe0: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x33fbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33fbe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33fbe8: 0x110200e9  beq         $t0, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x33FBE8u;
    {
        const bool branch_taken_0x33fbe8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x33FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBE8u;
        // 0x33fbec: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbe8) {
            ctx->pc = 0x33FF90u;
            goto label_33ff90;
        }
    }
    ctx->pc = 0x33FBF0u;
    // 0x33fbf0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x33fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x33fbf4: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x33FBF4u;
    {
        const bool branch_taken_0x33fbf4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBF4u;
        // 0x33fbf8: 0x483023  subu        $a2, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbf4) {
            ctx->pc = 0x33FC68u;
            goto label_33fc68;
        }
    }
    ctx->pc = 0x33FBFCu;
    // 0x33fbfc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33fc00: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x33fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x33fc04: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x33fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x33fc08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33FC08u;
    {
        const bool branch_taken_0x33fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC08u;
        // 0x33fc0c: 0xafb10030  sw          $s1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc08) {
            ctx->pc = 0x33FC34u;
            goto label_33fc34;
        }
    }
    ctx->pc = 0x33FC10u;
    // 0x33fc10: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x33fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x33fc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fc18: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x33fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x33fc1c: 0x8ee30020  lw          $v1, 0x20($s7)
    ctx->pc = 0x33fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x33fc20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fc24: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x33fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x33fc28: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x33fc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fc2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fc30: 0x828823  subu        $s1, $a0, $v0
    ctx->pc = 0x33fc30u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33fc34:
    // 0x33fc34: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x33fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x33fc38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33FC38u;
    {
        const bool branch_taken_0x33fc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC38u;
        // 0x33fc3c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc38) {
            ctx->pc = 0x33FC68u;
            goto label_33fc68;
        }
    }
    ctx->pc = 0x33FC40u;
    // 0x33fc40: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x33fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x33fc44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x33fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33fc48: 0x8ee50020  lw          $a1, 0x20($s7)
    ctx->pc = 0x33fc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x33fc4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33fc50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fc54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33fc58: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x33fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x33fc5c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x33fc5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fc60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fc64: 0x828823  subu        $s1, $a0, $v0
    ctx->pc = 0x33fc64u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33fc68:
    // 0x33fc68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fc6c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x33fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x33fc70: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x33fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x33fc74: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33fc78: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33fc7c: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x33fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x33fc80: 0x8e8300a8  lw          $v1, 0xA8($s4)
    ctx->pc = 0x33fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x33fc84: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x33fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x33fc88: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x33fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x33fc8c: 0x1041818  mult        $v1, $t0, $a0
    ctx->pc = 0x33fc8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33fc90: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x33fc90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33fc94: 0x18c000bc  blez        $a2, . + 4 + (0xBC << 2)
    ctx->pc = 0x33FC94u;
    {
        const bool branch_taken_0x33fc94 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x33FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC94u;
        // 0x33fc98: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc94) {
            ctx->pc = 0x33FF88u;
            goto label_33ff88;
        }
    }
    ctx->pc = 0x33FC9Cu;
    // 0x33fc9c: 0x3c080bb3  lui         $t0, 0xBB3
    ctx->pc = 0x33fc9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2995 << 16));
    // 0x33fca0: 0x3c023619  lui         $v0, 0x3619
    ctx->pc = 0x33fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13849 << 16));
    // 0x33fca4: 0x35088435  ori         $t0, $t0, 0x8435
    ctx->pc = 0x33fca4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)33845);
    // 0x33fca8: 0x3442636b  ori         $v0, $v0, 0x636B
    ctx->pc = 0x33fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25451);
    // 0x33fcac: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33fcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33fcb0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33fcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33fcb4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x33fcb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fcb8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x33fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x33fcbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33fcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33fcc0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33fcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33fcc4: 0xc7998440  lwc1        $f25, -0x7BC0($gp)
    ctx->pc = 0x33fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33fcc8: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x33fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x33fccc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33fcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33fcd0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33fcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33fcd4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x33fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_33fcd8:
    // 0x33fcd8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x33fcdc: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x33fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x33fce0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x33fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C26Cu));
    // 0x33fce4: 0x4400088  bltz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x33FCE4u;
    {
        const bool branch_taken_0x33fce4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCE4u;
        // 0x33fce8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fce4) {
            ctx->pc = 0x33FF08u;
            goto label_33ff08;
        }
    }
    ctx->pc = 0x33FCECu;
    // 0x33fcec: 0x400013  mtlo        $v0
    ctx->pc = 0x33fcecu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x33fcf0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x33fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x33fcf4: 0x72028000  madd        $s0, $s0, $v0
    ctx->pc = 0x33fcf4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33fcf8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FCF8u;
    {
        const bool branch_taken_0x33fcf8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCF8u;
        // 0x33fcfc: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fcf8) {
            ctx->pc = 0x33FD10u;
            goto label_33fd10;
        }
    }
    ctx->pc = 0x33FD00u;
    // 0x33fd00: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x33fd00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33fd04: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x33fd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x33fd08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33FD08u;
    {
        const bool branch_taken_0x33fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD08u;
        // 0x33fd0c: 0x4617a502  mul.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd08) {
            ctx->pc = 0x33FD28u;
            goto label_33fd28;
        }
    }
    ctx->pc = 0x33FD10u;
label_33fd10:
    // 0x33fd10: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33fd14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fd18: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x33fd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33fd1c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x33fd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x33fd20: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x33fd20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x33fd24: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x33fd24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_33fd28:
    // 0x33fd28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33fd2c: 0x400013  mtlo        $v0
    ctx->pc = 0x33fd2cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x33fd30: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x33fd30u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x33fd34: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x33fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x33fd38: 0x72028000  madd        $s0, $s0, $v0
    ctx->pc = 0x33fd38u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33fd3c: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x33fd3cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x33fd40: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x33fd40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x33fd44: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x33FD44u;
    SET_GPR_U32(ctx, 31, 0x33FD4Cu);
    ctx->pc = 0x33FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD44u;
    // 0x33fd48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x33FD44u, 0x33FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD4Cu;
label_33fd4c:
    // 0x33fd4c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x33fd4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x33fd50: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x33FD50u;
    SET_GPR_U32(ctx, 31, 0x33FD58u);
    ctx->pc = 0x33FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD50u;
    // 0x33fd54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x33FD50u, 0x33FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD58u;
label_33fd58:
    // 0x33fd58: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FD58u;
    {
        const bool branch_taken_0x33fd58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD58u;
        // 0x33fd5c: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd58) {
            ctx->pc = 0x33FD70u;
            goto label_33fd70;
        }
    }
    ctx->pc = 0x33FD60u;
    // 0x33fd60: 0x44902000  mtc1        $s0, $f4
    ctx->pc = 0x33fd60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33fd64: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x33fd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x33fd68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FD68u;
    {
        const bool branch_taken_0x33fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD68u;
        // 0x33fd6c: 0x46172102  mul.s       $f4, $f4, $f23 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd68) {
            ctx->pc = 0x33FD8Cu;
            goto label_33fd8c;
        }
    }
    ctx->pc = 0x33FD70u;
label_33fd70:
    // 0x33fd70: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33fd74: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33fd78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33fd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fd7c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x33fd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33fd80: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x33fd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x33fd84: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x33fd84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x33fd88: 0x46172102  mul.s       $f4, $f4, $f23
    ctx->pc = 0x33fd88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
label_33fd8c:
    // 0x33fd8c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x33fd8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x33fd90: 0x46162101  sub.s       $f4, $f4, $f22
    ctx->pc = 0x33fd90u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[22]);
    // 0x33fd94: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x33fd94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x33fd98: 0x4603b0c1  sub.s       $f3, $f22, $f3
    ctx->pc = 0x33fd98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
    // 0x33fd9c: 0x460300c4  c1          0x300C4
    ctx->pc = 0x33fd9cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x33fda0: 0x3c130bb3  lui         $s3, 0xBB3
    ctx->pc = 0x33fda0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2995 << 16));
    // 0x33fda4: 0x36738435  ori         $s3, $s3, 0x8435
    ctx->pc = 0x33fda4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)33845);
    // 0x33fda8: 0x3c123619  lui         $s2, 0x3619
    ctx->pc = 0x33fda8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)13849 << 16));
    // 0x33fdac: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33fdacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fdb0: 0x3652636b  ori         $s2, $s2, 0x636B
    ctx->pc = 0x33fdb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)25451);
    // 0x33fdb4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x33fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fdb8: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x33fdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fdbc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x33fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x33fdc0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33fdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33fdc4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33fdc4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fdc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33fdc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33fdcc: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33fdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x33fdd0: 0x46180140  add.s       $f5, $f0, $f24
    ctx->pc = 0x33fdd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x33fdd4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x33fdd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33fdd8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33fdd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33fddc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x33fddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x33fde0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x33fde0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x33fde4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x33fde4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33fde8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x33fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fdec: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x33fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fdf0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x33fdf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33fdf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33fdf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33fdf8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x33fdf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x33fdfc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33fdfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33fe00: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x33fe00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33fe04: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x33fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fe08: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x33fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fe0c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x33fe0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33fe10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33fe10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33fe14: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x33fe14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x33fe18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FE18u;
    {
        const bool branch_taken_0x33fe18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE18u;
        // 0x33fe1c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe18) {
            ctx->pc = 0x33FE30u;
            goto label_33fe30;
        }
    }
    ctx->pc = 0x33FE20u;
    // 0x33fe20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x33fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33fe24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33fe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe28: 0xc104d64  jal         func_413590
    ctx->pc = 0x33FE28u;
    SET_GPR_U32(ctx, 31, 0x33FE30u);
    ctx->pc = 0x33FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE28u;
    // 0x33fe2c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x33FE28u, 0x33FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE30u;
label_33fe30:
    // 0x33fe30: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x33fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x33fe34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fe38: 0x14440034  bne         $v0, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x33FE38u;
    {
        const bool branch_taken_0x33fe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE38u;
        // 0x33fe3c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe38) {
            ctx->pc = 0x33FF0Cu;
            goto label_33ff0c;
        }
    }
    ctx->pc = 0x33FE40u;
    // 0x33fe40: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x33fe44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33fe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe48: 0x2508c210  addiu       $t0, $t0, -0x3DF0
    ctx->pc = 0x33fe48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951440));
    // 0x33fe4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe50: 0x8d02005c  lw          $v0, 0x5C($t0)
    ctx->pc = 0x33fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C26Cu));
    // 0x33fe54: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x33FE54u;
    SET_GPR_U32(ctx, 31, 0x33FE5Cu);
    ctx->pc = 0x33FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE54u;
    // 0x33fe58: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x33FE54u, 0x33FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE5Cu;
label_33fe5c:
    // 0x33fe5c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x33fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x33fe60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FE60u;
    {
        const bool branch_taken_0x33fe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE60u;
        // 0x33fe64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe60) {
            ctx->pc = 0x33FE74u;
            goto label_33fe74;
        }
    }
    ctx->pc = 0x33FE68u;
    // 0x33fe68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33fe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe6c: 0xc104d84  jal         func_413610
    ctx->pc = 0x33FE6Cu;
    SET_GPR_U32(ctx, 31, 0x33FE74u);
    ctx->pc = 0x33FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE6Cu;
    // 0x33fe70: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x33FE6Cu, 0x33FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE74u;
label_33fe74:
    // 0x33fe74: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x33fe74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fe78: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33fe78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33fe7c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FE7Cu;
    {
        const bool branch_taken_0x33fe7c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE7Cu;
        // 0x33fe80: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe7c) {
            ctx->pc = 0x33FE94u;
            goto label_33fe94;
        }
    }
    ctx->pc = 0x33FE84u;
    // 0x33fe84: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33fe84u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fe88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33fe88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33fe8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33FE8Cu;
    {
        const bool branch_taken_0x33fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE8Cu;
        // 0x33fe90: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe8c) {
            ctx->pc = 0x33FEACu;
            goto label_33feac;
        }
    }
    ctx->pc = 0x33FE94u;
label_33fe94:
    // 0x33fe94: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33fe98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33fe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fe9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33fe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33fea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33fea4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33fea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33fea8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33fea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33feac:
    // 0x33feac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33feacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33feb0: 0x46160141  sub.s       $f5, $f0, $f22
    ctx->pc = 0x33feb0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x33feb4: 0xc6820050  lwc1        $f2, 0x50($s4)
    ctx->pc = 0x33feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33feb8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x33feb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x33febc: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x33febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fec0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x33fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fec4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33fec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33fec8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33fec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33fecc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x33feccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x33fed0: 0xc6820050  lwc1        $f2, 0x50($s4)
    ctx->pc = 0x33fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fed4: 0xc681004c  lwc1        $f1, 0x4C($s4)
    ctx->pc = 0x33fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fed8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x33fed8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x33fedc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x33fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fee0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x33fee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x33fee4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33fee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33fee8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x33fee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x33feec: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x33feecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fef0: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x33fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fef4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x33fef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33fef8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x33fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fefc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33fefcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33ff00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x33ff00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33ff04: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x33ff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_33ff08:
    // 0x33ff08: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_33ff0c:
    // 0x33ff0c: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x33ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x33ff10: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x33ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x33ff14: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FF14u;
    {
        const bool branch_taken_0x33ff14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF14u;
        // 0x33ff18: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff14) {
            ctx->pc = 0x33FF34u;
            goto label_33ff34;
        }
    }
    ctx->pc = 0x33FF1Cu;
    // 0x33ff1c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x33ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33ff20: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x33ff20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33ff24: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x33ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x33ff28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33ff2c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x33ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff30: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x33ff30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_33ff34:
    // 0x33ff34: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x33FF34u;
    {
        const bool branch_taken_0x33ff34 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF34u;
        // 0x33ff38: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff34) {
            ctx->pc = 0x33FF74u;
            goto label_33ff74;
        }
    }
    ctx->pc = 0x33FF3Cu;
    // 0x33ff3c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x33ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33ff40: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x33ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x33ff44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33ff48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33ff4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FF4Cu;
    {
        const bool branch_taken_0x33ff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF4Cu;
        // 0x33ff50: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff4c) {
            ctx->pc = 0x33FF70u;
            goto label_33ff70;
        }
    }
    ctx->pc = 0x33FF54u;
    // 0x33ff54: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x33ff54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x33ff58: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff5c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x33ff5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x33ff60: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x33ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff64: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x33ff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x33ff68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x33ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ff6c: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x33ff6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_33ff70:
    // 0x33ff70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_33ff74:
    // 0x33ff74: 0x8fa8002c  lw          $t0, 0x2C($sp)
    ctx->pc = 0x33ff74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x33ff78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33ff7c: 0x3c8f021  addu        $fp, $fp, $t0
    ctx->pc = 0x33ff7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x33ff80: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x33FF80u;
    {
        const bool branch_taken_0x33ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF80u;
        // 0x33ff84: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff80) {
            ctx->pc = 0x33FCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fcd8;
        }
    }
    ctx->pc = 0x33FF88u;
label_33ff88:
    // 0x33ff88: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x33ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_33ff8c:
    // 0x33ff8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33ff90:
    // 0x33ff90: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x33ff90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33ff94: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x33ff94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33ff98: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x33ff98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33ff9c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x33ff9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33ffa0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x33ffa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33ffa4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x33ffa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33ffa8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x33ffa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33ffac: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x33ffacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33ffb0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x33ffb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ffb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33ffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ffb8: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x33ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33ffbc: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x33ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33ffc0: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x33ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33ffc4: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x33ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33ffc8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x33ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33ffcc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x33ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x33FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFD0u;
        // 0x33ffd4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FFD8u;
}
