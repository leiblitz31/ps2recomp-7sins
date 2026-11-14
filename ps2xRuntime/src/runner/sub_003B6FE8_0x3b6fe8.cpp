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

// Function: sub_003B6FE8
// Address: 0x3b6fe8 - 0x3b7328
void sub_003B6FE8_0x3b6fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6FE8_0x3b6fe8");
#endif

    switch (ctx->pc) {
        case 0x3b7030u: goto label_3b7030;
        case 0x3b7038u: goto label_3b7038;
        case 0x3b7074u: goto label_3b7074;
        case 0x3b707cu: goto label_3b707c;
        case 0x3b70e8u: goto label_3b70e8;
        case 0x3b7104u: goto label_3b7104;
        case 0x3b710cu: goto label_3b710c;
        case 0x3b714cu: goto label_3b714c;
        case 0x3b7164u: goto label_3b7164;
        case 0x3b716cu: goto label_3b716c;
        case 0x3b7178u: goto label_3b7178;
        case 0x3b71a8u: goto label_3b71a8;
        case 0x3b71c4u: goto label_3b71c4;
        case 0x3b71ccu: goto label_3b71cc;
        case 0x3b720cu: goto label_3b720c;
        case 0x3b7224u: goto label_3b7224;
        case 0x3b722cu: goto label_3b722c;
        case 0x3b725cu: goto label_3b725c;
        case 0x3b7278u: goto label_3b7278;
        case 0x3b7280u: goto label_3b7280;
        case 0x3b72c0u: goto label_3b72c0;
        case 0x3b72d8u: goto label_3b72d8;
        case 0x3b72e0u: goto label_3b72e0;
        case 0x3b72f4u: goto label_3b72f4;
        default: break;
    }

    ctx->pc = 0x3b6fe8u;

label_3b6fe8:
    // 0x3b6fe8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b6fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b6fec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3b6fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3b6ff0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3b6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3b6ff4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b6ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ff8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3b6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3b6ffc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3b6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3b7000: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3b7000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3b7004: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b7004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b7008: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3b7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3b700c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3b700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3b7010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7014: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b7018: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b701c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B701Cu;
    {
        const bool branch_taken_0x3b701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B701Cu;
        // 0x3b7020: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b701c) {
            ctx->pc = 0x3B706Cu;
            goto label_3b706c;
        }
    }
    ctx->pc = 0x3B7024u;
    // 0x3b7024: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3b7024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3b7028: 0xc0eb816  jal         func_3AE058
    ctx->pc = 0x3B7028u;
    SET_GPR_U32(ctx, 31, 0x3B7030u);
    ctx->pc = 0x3B702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7028u;
    // 0x3b702c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B7028u, 0x3B7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7030u;
label_3b7030:
    // 0x3b7030: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B7030u;
    SET_GPR_U32(ctx, 31, 0x3B7038u);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B7030u, 0x3B7038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7038u;
label_3b7038:
    // 0x3b7038: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3b7038u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b703c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b7040: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3b7040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b7044: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x3b7044u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
    // 0x3b7048: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3b7048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3b704c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3b704cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b7050: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x3b7050u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
    // 0x3b7054: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x3b7054u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3b7058: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x3b7058u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
    // 0x3b705c: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x3b705cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3b7060: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x3b7060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x3b7064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7064u;
    {
        const bool branch_taken_0x3b7064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7064u;
        // 0x3b7068: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7064) {
            ctx->pc = 0x3B7074u;
            goto label_3b7074;
        }
    }
    ctx->pc = 0x3B706Cu;
label_3b706c:
    // 0x3b706c: 0xc0eb9c4  jal         func_3AE710
    ctx->pc = 0x3B706Cu;
    SET_GPR_U32(ctx, 31, 0x3B7074u);
    ctx->pc = 0x3B7070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B706Cu;
    // 0x3b7070: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B706Cu, 0x3B7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7074u;
label_3b7074:
    // 0x3b7074: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B7074u;
    SET_GPR_U32(ctx, 31, 0x3B707Cu);
    ctx->pc = 0x3B7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7074u;
    // 0x3b7078: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B7074u, 0x3B707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B707Cu;
label_3b707c:
    // 0x3b707c: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x3b707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x3b7080: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b7080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7084: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3b7084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3b7088: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3b7088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b708c: 0x12340097  beq         $s1, $s4, . + 4 + (0x97 << 2)
    ctx->pc = 0x3B708Cu;
    {
        const bool branch_taken_0x3b708c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B708Cu;
        // 0x3b7090: 0x2911023  subu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b708c) {
            ctx->pc = 0x3B72ECu;
            goto label_3b72ec;
        }
    }
    ctx->pc = 0x3B7094u;
    // 0x3b7094: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3b7094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7098: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3b7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3b709c: 0x2416fffd  addiu       $s6, $zero, -0x3
    ctx->pc = 0x3b709cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b70a0: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x3b70a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b70a4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3B70A4u;
    {
        const bool branch_taken_0x3b70a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70A4u;
        // 0x3b70a8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70a4) {
            ctx->pc = 0x3B7178u;
            goto label_3b7178;
        }
    }
    ctx->pc = 0x3B70ACu;
    // 0x3b70ac: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3b70acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3b70b0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3B70B0u;
    {
        const bool branch_taken_0x3b70b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b70b0) {
            ctx->pc = 0x3B7178u;
            goto label_3b7178;
        }
    }
    ctx->pc = 0x3B70B8u;
    // 0x3b70b8: 0x56f30006  bnel        $s7, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B70B8u;
    {
        const bool branch_taken_0x3b70b8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b70b8) {
            ctx->pc = 0x3B70BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B70B8u;
            // 0x3b70bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B70D4u;
            goto label_3b70d4;
        }
    }
    ctx->pc = 0x3B70C0u;
    // 0x3b70c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b70c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b70c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b70c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b70cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b70d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b70d4:
    // 0x3b70d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b70d8: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B70D8u;
    {
        const bool branch_taken_0x3b70d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b70d8) {
            ctx->pc = 0x3B70DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B70D8u;
            // 0x3b70dc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B70F0u;
            goto label_3b70f0;
        }
    }
    ctx->pc = 0x3B70E0u;
    // 0x3b70e0: 0xc0edbfa  jal         func_3B6FE8
    ctx->pc = 0x3B70E0u;
    SET_GPR_U32(ctx, 31, 0x3B70E8u);
    ctx->pc = 0x3B6FE8u;
    goto label_3b6fe8;
    ctx->pc = 0x3B70E8u;
label_3b70e8:
    // 0x3b70e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B70E8u;
    {
        const bool branch_taken_0x3b70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b70e8) {
            ctx->pc = 0x3B7164u;
            goto label_3b7164;
        }
    }
    ctx->pc = 0x3B70F0u;
label_3b70f0:
    // 0x3b70f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b70f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b70f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B70F4u;
    {
        const bool branch_taken_0x3b70f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b70f4) {
            ctx->pc = 0x3B7144u;
            goto label_3b7144;
        }
    }
    ctx->pc = 0x3B70FCu;
    // 0x3b70fc: 0xc0eb816  jal         func_3AE058
    ctx->pc = 0x3B70FCu;
    SET_GPR_U32(ctx, 31, 0x3B7104u);
    ctx->pc = 0x3B7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B70FCu;
    // 0x3b7100: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B70FCu, 0x3B7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7104u;
label_3b7104:
    // 0x3b7104: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B7104u;
    SET_GPR_U32(ctx, 31, 0x3B710Cu);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B7104u, 0x3B710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B710Cu;
label_3b710c:
    // 0x3b710c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b710cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7110: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3b7110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b7114: 0x7ca30050  sq          $v1, 0x50($a1)
    ctx->pc = 0x3b7114u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
    // 0x3b7118: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x3b7118u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b711c: 0x7ca40060  sq          $a0, 0x60($a1)
    ctx->pc = 0x3b711cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 4));
    // 0x3b7120: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3b7120u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3b7124: 0x7ca30070  sq          $v1, 0x70($a1)
    ctx->pc = 0x3b7124u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 3));
    // 0x3b7128: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x3b7128u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3b712c: 0x7ca40080  sq          $a0, 0x80($a1)
    ctx->pc = 0x3b712cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 4));
    // 0x3b7130: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b7134: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b7134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b7138: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x3b7138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x3b713c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B713Cu;
    {
        const bool branch_taken_0x3b713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B713Cu;
        // 0x3b7140: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b713c) {
            ctx->pc = 0x3B714Cu;
            goto label_3b714c;
        }
    }
    ctx->pc = 0x3B7144u;
label_3b7144:
    // 0x3b7144: 0xc0eb9c4  jal         func_3AE710
    ctx->pc = 0x3B7144u;
    SET_GPR_U32(ctx, 31, 0x3B714Cu);
    ctx->pc = 0x3B7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7144u;
    // 0x3b7148: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B7144u, 0x3B714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B714Cu;
label_3b714c:
    // 0x3b714c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b7150: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b7150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b7154: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7154u;
    {
        const bool branch_taken_0x3b7154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x3B7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7154u;
        // 0x3b7158: 0x24850050  addiu       $a1, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7154) {
            ctx->pc = 0x3B7164u;
            goto label_3b7164;
        }
    }
    ctx->pc = 0x3B715Cu;
    // 0x3b715c: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3B715Cu;
    SET_GPR_U32(ctx, 31, 0x3B7164u);
    ctx->pc = 0x3B7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B715Cu;
    // 0x3b7160: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3B715Cu, 0x3B7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7164u;
label_3b7164:
    // 0x3b7164: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3B7164u;
    SET_GPR_U32(ctx, 31, 0x3B716Cu);
    ctx->pc = 0x3B7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7164u;
    // 0x3b7168: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B7164u, 0x3B716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B716Cu;
label_3b716c:
    // 0x3b716c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3b716cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3b7170: 0x1234005e  beq         $s1, $s4, . + 4 + (0x5E << 2)
    ctx->pc = 0x3B7170u;
    {
        const bool branch_taken_0x3b7170 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3b7170) {
            ctx->pc = 0x3B72ECu;
            goto label_3b72ec;
        }
    }
    ctx->pc = 0x3B7178u;
label_3b7178:
    // 0x3b7178: 0x56f30006  bnel        $s7, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7178u;
    {
        const bool branch_taken_0x3b7178 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b7178) {
            ctx->pc = 0x3B717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7178u;
            // 0x3b717c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7194u;
            goto label_3b7194;
        }
    }
    ctx->pc = 0x3B7180u;
    // 0x3b7180: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b7180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b7184: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b7188: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b7188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b718c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b718cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b7190: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b7190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7194:
    // 0x3b7194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b7194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b7198: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7198u;
    {
        const bool branch_taken_0x3b7198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b7198) {
            ctx->pc = 0x3B719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7198u;
            // 0x3b719c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B71B0u;
            goto label_3b71b0;
        }
    }
    ctx->pc = 0x3B71A0u;
    // 0x3b71a0: 0xc0edbfa  jal         func_3B6FE8
    ctx->pc = 0x3B71A0u;
    SET_GPR_U32(ctx, 31, 0x3B71A8u);
    ctx->pc = 0x3B6FE8u;
    goto label_3b6fe8;
    ctx->pc = 0x3B71A8u;
label_3b71a8:
    // 0x3b71a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B71A8u;
    {
        const bool branch_taken_0x3b71a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b71a8) {
            ctx->pc = 0x3B7224u;
            goto label_3b7224;
        }
    }
    ctx->pc = 0x3B71B0u;
label_3b71b0:
    // 0x3b71b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b71b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b71b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B71B4u;
    {
        const bool branch_taken_0x3b71b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b71b4) {
            ctx->pc = 0x3B7204u;
            goto label_3b7204;
        }
    }
    ctx->pc = 0x3B71BCu;
    // 0x3b71bc: 0xc0eb816  jal         func_3AE058
    ctx->pc = 0x3B71BCu;
    SET_GPR_U32(ctx, 31, 0x3B71C4u);
    ctx->pc = 0x3B71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B71BCu;
    // 0x3b71c0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B71BCu, 0x3B71C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B71C4u;
label_3b71c4:
    // 0x3b71c4: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B71C4u;
    SET_GPR_U32(ctx, 31, 0x3B71CCu);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B71C4u, 0x3B71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B71CCu;
label_3b71cc:
    // 0x3b71cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b71ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b71d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b71d4: 0x7ca30050  sq          $v1, 0x50($a1)
    ctx->pc = 0x3b71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
    // 0x3b71d8: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x3b71d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b71dc: 0x7ca40060  sq          $a0, 0x60($a1)
    ctx->pc = 0x3b71dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 4));
    // 0x3b71e0: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3b71e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3b71e4: 0x7ca30070  sq          $v1, 0x70($a1)
    ctx->pc = 0x3b71e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 3));
    // 0x3b71e8: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x3b71e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3b71ec: 0x7ca40080  sq          $a0, 0x80($a1)
    ctx->pc = 0x3b71ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 4));
    // 0x3b71f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b71f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b71f8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x3b71f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x3b71fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B71FCu;
    {
        const bool branch_taken_0x3b71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B71FCu;
        // 0x3b7200: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b71fc) {
            ctx->pc = 0x3B720Cu;
            goto label_3b720c;
        }
    }
    ctx->pc = 0x3B7204u;
label_3b7204:
    // 0x3b7204: 0xc0eb9c4  jal         func_3AE710
    ctx->pc = 0x3B7204u;
    SET_GPR_U32(ctx, 31, 0x3B720Cu);
    ctx->pc = 0x3B7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7204u;
    // 0x3b7208: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B7204u, 0x3B720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B720Cu;
label_3b720c:
    // 0x3b720c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b7210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b7214: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7214u;
    {
        const bool branch_taken_0x3b7214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x3B7218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7214u;
        // 0x3b7218: 0x24850050  addiu       $a1, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7214) {
            ctx->pc = 0x3B7224u;
            goto label_3b7224;
        }
    }
    ctx->pc = 0x3B721Cu;
    // 0x3b721c: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3B721Cu;
    SET_GPR_U32(ctx, 31, 0x3B7224u);
    ctx->pc = 0x3B7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B721Cu;
    // 0x3b7220: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3B721Cu, 0x3B7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7224u;
label_3b7224:
    // 0x3b7224: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3B7224u;
    SET_GPR_U32(ctx, 31, 0x3B722Cu);
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B7224u, 0x3B722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B722Cu;
label_3b722c:
    // 0x3b722c: 0x56f30006  bnel        $s7, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B722Cu;
    {
        const bool branch_taken_0x3b722c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b722c) {
            ctx->pc = 0x3B7230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B722Cu;
            // 0x3b7230: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7248u;
            goto label_3b7248;
        }
    }
    ctx->pc = 0x3B7234u;
    // 0x3b7234: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b7238: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b723c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3b7240: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3b7240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3b7244: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b7244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7248:
    // 0x3b7248: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b724c: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B724Cu;
    {
        const bool branch_taken_0x3b724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b724c) {
            ctx->pc = 0x3B7250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B724Cu;
            // 0x3b7250: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7264u;
            goto label_3b7264;
        }
    }
    ctx->pc = 0x3B7254u;
    // 0x3b7254: 0xc0edbfa  jal         func_3B6FE8
    ctx->pc = 0x3B7254u;
    SET_GPR_U32(ctx, 31, 0x3B725Cu);
    ctx->pc = 0x3B6FE8u;
    goto label_3b6fe8;
    ctx->pc = 0x3B725Cu;
label_3b725c:
    // 0x3b725c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B725Cu;
    {
        const bool branch_taken_0x3b725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b725c) {
            ctx->pc = 0x3B72D8u;
            goto label_3b72d8;
        }
    }
    ctx->pc = 0x3B7264u;
label_3b7264:
    // 0x3b7264: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b7264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b7268: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B7268u;
    {
        const bool branch_taken_0x3b7268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7268) {
            ctx->pc = 0x3B72B8u;
            goto label_3b72b8;
        }
    }
    ctx->pc = 0x3B7270u;
    // 0x3b7270: 0xc0eb816  jal         func_3AE058
    ctx->pc = 0x3B7270u;
    SET_GPR_U32(ctx, 31, 0x3B7278u);
    ctx->pc = 0x3B7274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7270u;
    // 0x3b7274: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B7270u, 0x3B7278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7278u;
label_3b7278:
    // 0x3b7278: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B7278u;
    SET_GPR_U32(ctx, 31, 0x3B7280u);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B7278u, 0x3B7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7280u;
label_3b7280:
    // 0x3b7280: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b7280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7284: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3b7284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b7288: 0x7ca30050  sq          $v1, 0x50($a1)
    ctx->pc = 0x3b7288u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 3));
    // 0x3b728c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x3b728cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b7290: 0x7ca40060  sq          $a0, 0x60($a1)
    ctx->pc = 0x3b7290u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 4));
    // 0x3b7294: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3b7294u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3b7298: 0x7ca30070  sq          $v1, 0x70($a1)
    ctx->pc = 0x3b7298u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 3));
    // 0x3b729c: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x3b729cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3b72a0: 0x7ca40080  sq          $a0, 0x80($a1)
    ctx->pc = 0x3b72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 4));
    // 0x3b72a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b72a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3b72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3b72ac: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x3b72acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x3b72b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B72B0u;
    {
        const bool branch_taken_0x3b72b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72B0u;
        // 0x3b72b4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b72b0) {
            ctx->pc = 0x3B72C0u;
            goto label_3b72c0;
        }
    }
    ctx->pc = 0x3B72B8u;
label_3b72b8:
    // 0x3b72b8: 0xc0eb9c4  jal         func_3AE710
    ctx->pc = 0x3B72B8u;
    SET_GPR_U32(ctx, 31, 0x3B72C0u);
    ctx->pc = 0x3B72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72B8u;
    // 0x3b72bc: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B72B8u, 0x3B72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72C0u;
label_3b72c0:
    // 0x3b72c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b72c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b72c8: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B72C8u;
    {
        const bool branch_taken_0x3b72c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x3B72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72C8u;
        // 0x3b72cc: 0x24850050  addiu       $a1, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b72c8) {
            ctx->pc = 0x3B72D8u;
            goto label_3b72d8;
        }
    }
    ctx->pc = 0x3B72D0u;
    // 0x3b72d0: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3B72D0u;
    SET_GPR_U32(ctx, 31, 0x3B72D8u);
    ctx->pc = 0x3B72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72D0u;
    // 0x3b72d4: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3B72D0u, 0x3B72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72D8u;
label_3b72d8:
    // 0x3b72d8: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3B72D8u;
    SET_GPR_U32(ctx, 31, 0x3B72E0u);
    ctx->pc = 0x3B72DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B72D8u;
    // 0x3b72dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B72D8u, 0x3B72E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72E0u;
label_3b72e0:
    // 0x3b72e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3b72e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3b72e4: 0x1634ffa4  bne         $s1, $s4, . + 4 + (-0x5C << 2)
    ctx->pc = 0x3B72E4u;
    {
        const bool branch_taken_0x3b72e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b72e4) {
            ctx->pc = 0x3B7178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7178;
        }
    }
    ctx->pc = 0x3B72ECu;
label_3b72ec:
    // 0x3b72ec: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3B72ECu;
    SET_GPR_U32(ctx, 31, 0x3B72F4u);
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B72ECu, 0x3B72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72F4u;
label_3b72f4:
    // 0x3b72f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b72f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3b72f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b72fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3b72fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b7300: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3b7300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b7304: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3b7304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b7308: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b7308u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b730c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3b730cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7310: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3b7310u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7314: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3b7314u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b731c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B731Cu;
        // 0x3b7320: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7324u;
    // 0x3b7324: 0x0  nop
    ctx->pc = 0x3b7324u;
    // NOP
    ctx->pc = 0x3b7328u;
}
