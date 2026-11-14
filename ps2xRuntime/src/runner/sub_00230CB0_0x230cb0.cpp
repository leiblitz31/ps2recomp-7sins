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

// Function: sub_00230CB0
// Address: 0x230cb0 - 0x230de0
void sub_00230CB0_0x230cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230CB0_0x230cb0");
#endif

    switch (ctx->pc) {
        case 0x230cd8u: goto label_230cd8;
        case 0x230ce8u: goto label_230ce8;
        case 0x230d00u: goto label_230d00;
        case 0x230d10u: goto label_230d10;
        case 0x230d20u: goto label_230d20;
        case 0x230d30u: goto label_230d30;
        case 0x230d40u: goto label_230d40;
        case 0x230d58u: goto label_230d58;
        case 0x230d68u: goto label_230d68;
        case 0x230d78u: goto label_230d78;
        case 0x230d88u: goto label_230d88;
        case 0x230d98u: goto label_230d98;
        case 0x230db0u: goto label_230db0;
        case 0x230dc4u: goto label_230dc4;
        default: break;
    }

    ctx->pc = 0x230cb0u;

    // 0x230cb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x230cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x230cbc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x230cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x230cc0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x230cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x230cc4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x230cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x230cc8: 0xa3a700a0  sb          $a3, 0xA0($sp)
    ctx->pc = 0x230cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 7));
    // 0x230ccc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x230cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x230cd0: 0xc0495d4  jal         func_125750
    ctx->pc = 0x230CD0u;
    SET_GPR_U32(ctx, 31, 0x230CD8u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x230CD0u, 0x230CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CD8u;
label_230cd8:
    // 0x230cd8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x230cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x230cdc: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x230cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x230ce0: 0xc0bc510  jal         func_2F1440
    ctx->pc = 0x230CE0u;
    SET_GPR_U32(ctx, 31, 0x230CE8u);
    ctx->pc = 0x2F1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1440u, 0x230CE0u, 0x230CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CE8u;
label_230ce8:
    // 0x230ce8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x230CE8u;
    {
        const bool branch_taken_0x230ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ce8) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230CF0u;
    // 0x230cf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x230cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230cf4: 0x27859d10  addiu       $a1, $gp, -0x62F0
    ctx->pc = 0x230cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941968));
    // 0x230cf8: 0xc040304  jal         func_100C10
    ctx->pc = 0x230CF8u;
    SET_GPR_U32(ctx, 31, 0x230D00u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x230CF8u, 0x230D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D00u;
label_230d00:
    // 0x230d00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x230d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x230d04: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x230d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230d08: 0xc119568  jal         func_4655A0
    ctx->pc = 0x230D08u;
    SET_GPR_U32(ctx, 31, 0x230D10u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x230D08u, 0x230D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D10u;
label_230d10:
    // 0x230d10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x230d14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x230d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x230d18: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x230D18u;
    SET_GPR_U32(ctx, 31, 0x230D20u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x230D18u, 0x230D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D20u;
label_230d20:
    // 0x230d20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x230d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x230d24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230d28: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x230D28u;
    SET_GPR_U32(ctx, 31, 0x230D30u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x230D28u, 0x230D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D30u;
label_230d30:
    // 0x230d30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230d34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230d38: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x230D38u;
    SET_GPR_U32(ctx, 31, 0x230D40u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x230D38u, 0x230D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D40u;
label_230d40:
    // 0x230d40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x230D40u;
    {
        const bool branch_taken_0x230d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230d40) {
            ctx->pc = 0x230D98u;
            goto label_230d98;
        }
    }
    ctx->pc = 0x230D48u;
label_230d48:
    // 0x230d48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x230d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x230d4c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x230d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x230d50: 0xc040304  jal         func_100C10
    ctx->pc = 0x230D50u;
    SET_GPR_U32(ctx, 31, 0x230D58u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x230D50u, 0x230D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D58u;
label_230d58:
    // 0x230d58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x230d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x230d5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x230d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x230d60: 0xc119568  jal         func_4655A0
    ctx->pc = 0x230D60u;
    SET_GPR_U32(ctx, 31, 0x230D68u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x230D60u, 0x230D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D68u;
label_230d68:
    // 0x230d68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x230d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x230d6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x230d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x230d70: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x230D70u;
    SET_GPR_U32(ctx, 31, 0x230D78u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x230D70u, 0x230D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D78u;
label_230d78:
    // 0x230d78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x230d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x230d7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230d80: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x230D80u;
    SET_GPR_U32(ctx, 31, 0x230D88u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x230D80u, 0x230D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D88u;
label_230d88:
    // 0x230d88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x230d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x230d8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230d90: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x230D90u;
    SET_GPR_U32(ctx, 31, 0x230D98u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x230D90u, 0x230D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D98u;
label_230d98:
    // 0x230d98: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230d9c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x230d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230da0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x230da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x230da4: 0x93a700a0  lbu         $a3, 0xA0($sp)
    ctx->pc = 0x230da4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x230da8: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x230DA8u;
    SET_GPR_U32(ctx, 31, 0x230DB0u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x230DA8u, 0x230DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DB0u;
label_230db0:
    // 0x230db0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x230db0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x230db4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x230db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x230db8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230dbc: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x230DBCu;
    SET_GPR_U32(ctx, 31, 0x230DC4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x230DBCu, 0x230DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC4u;
label_230dc4:
    // 0x230dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230dd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x230dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x230dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x230DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230DDCu;
    // 0x230ddc: 0x0  nop
    ctx->pc = 0x230ddcu;
    // NOP
    ctx->pc = 0x230de0u;
}
