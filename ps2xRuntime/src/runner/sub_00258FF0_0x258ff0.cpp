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

// Function: sub_00258FF0
// Address: 0x258ff0 - 0x259150
void sub_00258FF0_0x258ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258FF0_0x258ff0");
#endif

    switch (ctx->pc) {
        case 0x259024u: goto label_259024;
        case 0x259038u: goto label_259038;
        case 0x25905cu: goto label_25905c;
        case 0x259084u: goto label_259084;
        case 0x2590a8u: goto label_2590a8;
        case 0x2590d0u: goto label_2590d0;
        case 0x259100u: goto label_259100;
        case 0x259110u: goto label_259110;
        case 0x25912cu: goto label_25912c;
        default: break;
    }

    ctx->pc = 0x258ff0u;

    // 0x258ff0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x258ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x258ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x258ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x258ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259004: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x259004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x259008: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x259008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25900c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25900cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x259010: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x259010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x259014: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x259014u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x259018: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x259018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25901c: 0xc0964c8  jal         func_259320
    ctx->pc = 0x25901Cu;
    SET_GPR_U32(ctx, 31, 0x259024u);
    ctx->pc = 0x259320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259320u, 0x25901Cu, 0x259024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259024u;
label_259024:
    // 0x259024: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x259024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x259028: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x259028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25902c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x259030: 0xc041954  jal         func_106550
    ctx->pc = 0x259030u;
    SET_GPR_U32(ctx, 31, 0x259038u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x259030u, 0x259038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259038u;
label_259038:
    // 0x259038: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x259038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25903c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259040: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259044: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x259044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259048: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x259048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25904c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25904cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x259050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259054: 0xc097180  jal         func_25C600
    ctx->pc = 0x259054u;
    SET_GPR_U32(ctx, 31, 0x25905Cu);
    ctx->pc = 0x25C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C600u, 0x259054u, 0x25905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25905Cu;
label_25905c:
    // 0x25905c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25905cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259060: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x259060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259064: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x259064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259068: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x259068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x25906c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259070: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x259070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x259074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259078: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x259078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x25907c: 0xc0964a8  jal         func_2592A0
    ctx->pc = 0x25907Cu;
    SET_GPR_U32(ctx, 31, 0x259084u);
    ctx->pc = 0x2592A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2592A0u, 0x25907Cu, 0x259084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259084u;
label_259084:
    // 0x259084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259088: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x259088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25908c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259090: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x259090u;
    {
        const bool branch_taken_0x259090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x259090) {
            ctx->pc = 0x2590B4u;
            goto label_2590b4;
        }
    }
    ctx->pc = 0x259098u;
    // 0x259098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25909c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x25909cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2590a0: 0xc0964d8  jal         func_259360
    ctx->pc = 0x2590A0u;
    SET_GPR_U32(ctx, 31, 0x2590A8u);
    ctx->pc = 0x259360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259360u, 0x2590A0u, 0x2590A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590A8u;
label_2590a8:
    // 0x2590a8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2590a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2590ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2590ACu;
    {
        const bool branch_taken_0x2590ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2590ac) {
            ctx->pc = 0x2590D4u;
            goto label_2590d4;
        }
    }
    ctx->pc = 0x2590B4u;
label_2590b4:
    // 0x2590b4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2590b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2590b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2590b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590bc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2590bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2590c0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2590c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2590c4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2590c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2590c8: 0xc096488  jal         func_259220
    ctx->pc = 0x2590C8u;
    SET_GPR_U32(ctx, 31, 0x2590D0u);
    ctx->pc = 0x259220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259220u, 0x2590C8u, 0x2590D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590D0u;
label_2590d0:
    // 0x2590d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2590d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2590d4:
    // 0x2590d4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2590d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2590d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2590D8u;
    {
        const bool branch_taken_0x2590d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2590d8) {
            ctx->pc = 0x259104u;
            goto label_259104;
        }
    }
    ctx->pc = 0x2590E0u;
    // 0x2590e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2590e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2590e4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2590e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2590e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2590e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2590ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2590ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2590f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2590f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590f4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2590f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2590f8: 0xc0964a8  jal         func_2592A0
    ctx->pc = 0x2590F8u;
    SET_GPR_U32(ctx, 31, 0x259100u);
    ctx->pc = 0x2592A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2592A0u, 0x2590F8u, 0x259100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259100u;
label_259100:
    // 0x259100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259104:
    // 0x259104: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259108: 0xc096468  jal         func_2591A0
    ctx->pc = 0x259108u;
    SET_GPR_U32(ctx, 31, 0x259110u);
    ctx->pc = 0x2591A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2591A0u, 0x259108u, 0x259110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259110u;
label_259110:
    // 0x259110: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x259110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x259114: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x259114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x259118: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x259118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25911c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25911cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x259120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259124: 0xc096454  jal         func_259150
    ctx->pc = 0x259124u;
    SET_GPR_U32(ctx, 31, 0x25912Cu);
    ctx->pc = 0x259150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259150u, 0x259124u, 0x25912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25912Cu;
label_25912c:
    // 0x25912c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25913c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25913cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x259140: 0x3e00008  jr          $ra
    ctx->pc = 0x259140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259148u;
    // 0x259148: 0x0  nop
    ctx->pc = 0x259148u;
    // NOP
    // 0x25914c: 0x0  nop
    ctx->pc = 0x25914cu;
    // NOP
    ctx->pc = 0x259150u;
}
