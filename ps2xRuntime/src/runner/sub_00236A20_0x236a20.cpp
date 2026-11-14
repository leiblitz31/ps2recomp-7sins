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

// Function: sub_00236A20
// Address: 0x236a20 - 0x236ae0
void sub_00236A20_0x236a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A20_0x236a20");
#endif

    switch (ctx->pc) {
        case 0x236a6cu: goto label_236a6c;
        case 0x236a8cu: goto label_236a8c;
        case 0x236a9cu: goto label_236a9c;
        case 0x236ac4u: goto label_236ac4;
        default: break;
    }

    ctx->pc = 0x236a20u;

    // 0x236a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x236a2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x236a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x236a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a34: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x236A34u;
    {
        const bool branch_taken_0x236a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a34) {
            ctx->pc = 0x236AC4u;
            goto label_236ac4;
        }
    }
    ctx->pc = 0x236A3Cu;
    // 0x236a3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x236a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x236a40: 0x24635540  addiu       $v1, $v1, 0x5540
    ctx->pc = 0x236a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21824));
    // 0x236a44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x236a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x236a4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a50: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x236a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x236a54: 0x10020013  beq         $zero, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x236A54u;
    {
        const bool branch_taken_0x236a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x236a54) {
            ctx->pc = 0x236AA4u;
            goto label_236aa4;
        }
    }
    ctx->pc = 0x236A5Cu;
    // 0x236a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x236a64: 0xc119f88  jal         func_467E20
    ctx->pc = 0x236A64u;
    SET_GPR_U32(ctx, 31, 0x236A6Cu);
    ctx->pc = 0x467E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E20u, 0x236A64u, 0x236A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A6Cu;
label_236a6c:
    // 0x236a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x236a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x236a74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236A74u;
    {
        const bool branch_taken_0x236a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a74) {
            ctx->pc = 0x236AA4u;
            goto label_236aa4;
        }
    }
    ctx->pc = 0x236A7Cu;
    // 0x236a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x236a84: 0xc049384  jal         func_124E10
    ctx->pc = 0x236A84u;
    SET_GPR_U32(ctx, 31, 0x236A8Cu);
    ctx->pc = 0x124E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E10u, 0x236A84u, 0x236A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A8Cu;
label_236a8c:
    // 0x236a8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x236a94: 0xc119c5c  jal         func_467170
    ctx->pc = 0x236A94u;
    SET_GPR_U32(ctx, 31, 0x236A9Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x236A94u, 0x236A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A9Cu;
label_236a9c:
    // 0x236a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236aa0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x236aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_236aa4:
    // 0x236aa4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236aa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x236aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x236aac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x236aacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x236ab0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236AB0u;
    {
        const bool branch_taken_0x236ab0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x236ab0) {
            ctx->pc = 0x236AC4u;
            goto label_236ac4;
        }
    }
    ctx->pc = 0x236AB8u;
    // 0x236ab8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x236ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236abc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x236ABCu;
    SET_GPR_U32(ctx, 31, 0x236AC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x236ABCu, 0x236AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AC4u;
label_236ac4:
    // 0x236ac4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236acc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x236accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x236ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x236AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236AD8u;
    // 0x236ad8: 0x0  nop
    ctx->pc = 0x236ad8u;
    // NOP
    // 0x236adc: 0x0  nop
    ctx->pc = 0x236adcu;
    // NOP
    ctx->pc = 0x236ae0u;
}
