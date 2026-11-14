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

// Function: sub_00485D30
// Address: 0x485d30 - 0x485ed0
void sub_00485D30_0x485d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485D30_0x485d30");
#endif

    switch (ctx->pc) {
        case 0x485d50u: goto label_485d50;
        case 0x485d6cu: goto label_485d6c;
        case 0x485d90u: goto label_485d90;
        case 0x485da4u: goto label_485da4;
        case 0x485dc8u: goto label_485dc8;
        case 0x485df4u: goto label_485df4;
        case 0x485e20u: goto label_485e20;
        case 0x485e44u: goto label_485e44;
        case 0x485e60u: goto label_485e60;
        case 0x485e7cu: goto label_485e7c;
        case 0x485ea4u: goto label_485ea4;
        case 0x485eb4u: goto label_485eb4;
        default: break;
    }

    ctx->pc = 0x485d30u;

    // 0x485d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x485d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x485d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x485d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x485d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x485d40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x485d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x485d44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d48: 0xc1216f8  jal         func_485BE0
    ctx->pc = 0x485D48u;
    SET_GPR_U32(ctx, 31, 0x485D50u);
    ctx->pc = 0x485BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485BE0u, 0x485D48u, 0x485D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485D50u;
label_485d50:
    // 0x485d50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x485d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485d54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x485d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x485d5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x485d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485d64: 0xc1215b0  jal         func_4856C0
    ctx->pc = 0x485D64u;
    SET_GPR_U32(ctx, 31, 0x485D6Cu);
    ctx->pc = 0x4856C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4856C0u, 0x485D64u, 0x485D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485D6Cu;
label_485d6c:
    // 0x485d6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d70: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x485d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x485d74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d78: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x485d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x485d7c: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x485D7Cu;
    {
        const bool branch_taken_0x485d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x485d7c) {
            ctx->pc = 0x485E7Cu;
            goto label_485e7c;
        }
    }
    ctx->pc = 0x485D84u;
    // 0x485d84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d88: 0xc121d20  jal         func_487480
    ctx->pc = 0x485D88u;
    SET_GPR_U32(ctx, 31, 0x485D90u);
    ctx->pc = 0x487480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487480u, 0x485D88u, 0x485D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485D90u;
label_485d90:
    // 0x485d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485d98: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x485d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485d9c: 0xc121fb8  jal         func_487EE0
    ctx->pc = 0x485D9Cu;
    SET_GPR_U32(ctx, 31, 0x485DA4u);
    ctx->pc = 0x487EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487EE0u, 0x485D9Cu, 0x485DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485DA4u;
label_485da4:
    // 0x485da4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485da8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x485da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485dac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485db0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x485db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485db4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x485db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485db8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x485db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x485dbc: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x485dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485dc0: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x485DC0u;
    SET_GPR_U32(ctx, 31, 0x485DC8u);
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x485DC0u, 0x485DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485DC8u;
label_485dc8:
    // 0x485dc8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485dcc: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x485dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x485dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485dd4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x485dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485dd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485ddc: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x485ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485de0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x485de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485de4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x485de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x485de8: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x485de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485dec: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x485DECu;
    SET_GPR_U32(ctx, 31, 0x485DF4u);
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x485DECu, 0x485DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485DF4u;
label_485df4:
    // 0x485df4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485df8: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x485df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x485dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e00: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x485e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e08: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x485e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485e0c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x485e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485e10: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x485e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x485e14: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x485e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485e18: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x485E18u;
    SET_GPR_U32(ctx, 31, 0x485E20u);
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x485E18u, 0x485E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485E20u;
label_485e20:
    // 0x485e20: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e24: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x485e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x485e28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e30: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x485e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485e34: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x485e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x485e38: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x485e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485e3c: 0xc0ef404  jal         func_3BD010
    ctx->pc = 0x485E3Cu;
    SET_GPR_U32(ctx, 31, 0x485E44u);
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x485E3Cu, 0x485E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485E44u;
label_485e44:
    // 0x485e44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e4c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x485e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485e50: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x485e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x485e54: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x485e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485e58: 0xc0ef404  jal         func_3BD010
    ctx->pc = 0x485E58u;
    SET_GPR_U32(ctx, 31, 0x485E60u);
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x485E58u, 0x485E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485E60u;
label_485e60:
    // 0x485e60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e68: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x485e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x485e6c: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x485e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x485e70: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x485e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x485e74: 0xc0ef404  jal         func_3BD010
    ctx->pc = 0x485E74u;
    SET_GPR_U32(ctx, 31, 0x485E7Cu);
    ctx->pc = 0x3BD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD010u, 0x485E74u, 0x485E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485E7Cu;
label_485e7c:
    // 0x485e7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x485e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485e80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e84: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x485e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x485e88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x485e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485e8c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x485E8Cu;
    {
        const bool branch_taken_0x485e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x485e8c) {
            ctx->pc = 0x485EB4u;
            goto label_485eb4;
        }
    }
    ctx->pc = 0x485E94u;
    // 0x485e94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485e98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x485e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485e9c: 0xc121d44  jal         func_487510
    ctx->pc = 0x485E9Cu;
    SET_GPR_U32(ctx, 31, 0x485EA4u);
    ctx->pc = 0x487510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487510u, 0x485E9Cu, 0x485EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485EA4u;
label_485ea4:
    // 0x485ea4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485ea8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x485ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485eac: 0xc121df0  jal         func_4877C0
    ctx->pc = 0x485EACu;
    SET_GPR_U32(ctx, 31, 0x485EB4u);
    ctx->pc = 0x4877C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4877C0u, 0x485EACu, 0x485EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485EB4u;
label_485eb4:
    // 0x485eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485eb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x485eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x485ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x485EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485EC4u;
    // 0x485ec4: 0x0  nop
    ctx->pc = 0x485ec4u;
    // NOP
    // 0x485ec8: 0x0  nop
    ctx->pc = 0x485ec8u;
    // NOP
    // 0x485ecc: 0x0  nop
    ctx->pc = 0x485eccu;
    // NOP
    ctx->pc = 0x485ed0u;
}
