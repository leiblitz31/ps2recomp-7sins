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

// Function: sub_001A7070
// Address: 0x1a7070 - 0x1a71d0
void sub_001A7070_0x1a7070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7070_0x1a7070");
#endif

    switch (ctx->pc) {
        case 0x1a70a4u: goto label_1a70a4;
        case 0x1a70b8u: goto label_1a70b8;
        case 0x1a70dcu: goto label_1a70dc;
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7128u: goto label_1a7128;
        case 0x1a7150u: goto label_1a7150;
        case 0x1a7180u: goto label_1a7180;
        case 0x1a7190u: goto label_1a7190;
        case 0x1a71acu: goto label_1a71ac;
        default: break;
    }

    ctx->pc = 0x1a7070u;

    // 0x1a7070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a7070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a7074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a707c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7084: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a7084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a7088: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1a7088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1a708c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1a708cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1a7090: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1a7090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1a7094: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1a7094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a7098: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a7098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a709c: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1A709Cu;
    SET_GPR_U32(ctx, 31, 0x1A70A4u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1A709Cu, 0x1A70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70A4u;
label_1a70a4:
    // 0x1a70a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a70a8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a70ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a70b0: 0xc041954  jal         func_106550
    ctx->pc = 0x1A70B0u;
    SET_GPR_U32(ctx, 31, 0x1A70B8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1A70B0u, 0x1A70B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70B8u;
label_1a70b8:
    // 0x1a70b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a70bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a70c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a70c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a70c8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a70cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a70ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a70d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70d4: 0xc06a028  jal         func_1A80A0
    ctx->pc = 0x1A70D4u;
    SET_GPR_U32(ctx, 31, 0x1A70DCu);
    ctx->pc = 0x1A80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80A0u, 0x1A70D4u, 0x1A70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70DCu;
label_1a70dc:
    // 0x1a70dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a70dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a70e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a70e8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1a70e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a70ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a70f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1a70f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a70f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a70f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70f8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1a70f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a70fc: 0xc069cc8  jal         func_1A7320
    ctx->pc = 0x1A70FCu;
    SET_GPR_U32(ctx, 31, 0x1A7104u);
    ctx->pc = 0x1A7320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7320u, 0x1A70FCu, 0x1A7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7104u;
label_1a7104:
    // 0x1a7104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7108: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a710c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7110: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7110u;
    {
        const bool branch_taken_0x1a7110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7110) {
            ctx->pc = 0x1A7134u;
            goto label_1a7134;
        }
    }
    ctx->pc = 0x1A7118u;
    // 0x1a7118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a711c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1a711cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7120: 0xc069cf8  jal         func_1A73E0
    ctx->pc = 0x1A7120u;
    SET_GPR_U32(ctx, 31, 0x1A7128u);
    ctx->pc = 0x1A73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73E0u, 0x1A7120u, 0x1A7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7128u;
label_1a7128:
    // 0x1a7128: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a712c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A712Cu;
    {
        const bool branch_taken_0x1a712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a712c) {
            ctx->pc = 0x1A7154u;
            goto label_1a7154;
        }
    }
    ctx->pc = 0x1A7134u;
label_1a7134:
    // 0x1a7134: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1a7134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a713c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1a713cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7140: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7144: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1a7148: 0xc069ca8  jal         func_1A72A0
    ctx->pc = 0x1A7148u;
    SET_GPR_U32(ctx, 31, 0x1A7150u);
    ctx->pc = 0x1A72A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72A0u, 0x1A7148u, 0x1A7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7150u;
label_1a7150:
    // 0x1a7150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7154:
    // 0x1a7154: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a7154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7158: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7158u;
    {
        const bool branch_taken_0x1a7158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7158) {
            ctx->pc = 0x1A7184u;
            goto label_1a7184;
        }
    }
    ctx->pc = 0x1A7160u;
    // 0x1a7160: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7164: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1a7164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7168: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a7168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a716c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a716cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a7170: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7174: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1a7174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a7178: 0xc069cc8  jal         func_1A7320
    ctx->pc = 0x1A7178u;
    SET_GPR_U32(ctx, 31, 0x1A7180u);
    ctx->pc = 0x1A7320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7320u, 0x1A7178u, 0x1A7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7180u;
label_1a7180:
    // 0x1a7180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7184:
    // 0x1a7184: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a7184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7188: 0xc069c88  jal         func_1A7220
    ctx->pc = 0x1A7188u;
    SET_GPR_U32(ctx, 31, 0x1A7190u);
    ctx->pc = 0x1A7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7220u, 0x1A7188u, 0x1A7190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7190u;
label_1a7190:
    // 0x1a7190: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1a7194: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a7194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a7198: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a7198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a719c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a719cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a71a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71a4: 0xc069c74  jal         func_1A71D0
    ctx->pc = 0x1A71A4u;
    SET_GPR_U32(ctx, 31, 0x1A71ACu);
    ctx->pc = 0x1A71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A71D0u, 0x1A71A4u, 0x1A71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71ACu;
label_1a71ac:
    // 0x1a71ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a71acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a71b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a71b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a71b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a71b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a71b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a71b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1a71bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a71c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A71C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A71C8u;
    // 0x1a71c8: 0x0  nop
    ctx->pc = 0x1a71c8u;
    // NOP
    // 0x1a71cc: 0x0  nop
    ctx->pc = 0x1a71ccu;
    // NOP
    ctx->pc = 0x1a71d0u;
}
