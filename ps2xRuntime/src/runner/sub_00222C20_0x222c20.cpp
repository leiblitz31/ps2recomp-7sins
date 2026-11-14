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

// Function: sub_00222C20
// Address: 0x222c20 - 0x222fd0
void sub_00222C20_0x222c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222C20_0x222c20");
#endif

    switch (ctx->pc) {
        case 0x222c50u: goto label_222c50;
        case 0x222c5cu: goto label_222c5c;
        case 0x222c68u: goto label_222c68;
        case 0x222c74u: goto label_222c74;
        case 0x222c8cu: goto label_222c8c;
        case 0x222c98u: goto label_222c98;
        case 0x222cacu: goto label_222cac;
        case 0x222cb8u: goto label_222cb8;
        case 0x222cc4u: goto label_222cc4;
        case 0x222ce0u: goto label_222ce0;
        case 0x222cf0u: goto label_222cf0;
        case 0x222d00u: goto label_222d00;
        case 0x222d1cu: goto label_222d1c;
        case 0x222d30u: goto label_222d30;
        case 0x222d48u: goto label_222d48;
        case 0x222d58u: goto label_222d58;
        case 0x222d64u: goto label_222d64;
        case 0x222d7cu: goto label_222d7c;
        case 0x222d88u: goto label_222d88;
        case 0x222da0u: goto label_222da0;
        case 0x222db4u: goto label_222db4;
        case 0x222ddcu: goto label_222ddc;
        case 0x222decu: goto label_222dec;
        case 0x222e04u: goto label_222e04;
        case 0x222e18u: goto label_222e18;
        case 0x222e2cu: goto label_222e2c;
        case 0x222e38u: goto label_222e38;
        case 0x222e44u: goto label_222e44;
        case 0x222e54u: goto label_222e54;
        case 0x222e6cu: goto label_222e6c;
        case 0x222e88u: goto label_222e88;
        case 0x222e94u: goto label_222e94;
        case 0x222ea0u: goto label_222ea0;
        case 0x222eb0u: goto label_222eb0;
        case 0x222ec8u: goto label_222ec8;
        case 0x222ee8u: goto label_222ee8;
        case 0x222efcu: goto label_222efc;
        case 0x222f10u: goto label_222f10;
        case 0x222f28u: goto label_222f28;
        case 0x222f4cu: goto label_222f4c;
        case 0x222f60u: goto label_222f60;
        case 0x222f6cu: goto label_222f6c;
        case 0x222f8cu: goto label_222f8c;
        case 0x222f9cu: goto label_222f9c;
        default: break;
    }

    ctx->pc = 0x222c20u;

    // 0x222c20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x222c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x222c24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x222c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x222c28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x222c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x222c2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x222c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x222c30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x222c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x222c34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x222c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x222c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x222c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x222c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x222c44: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x222c48: 0xc088f5c  jal         func_223D70
    ctx->pc = 0x222C48u;
    SET_GPR_U32(ctx, 31, 0x222C50u);
    ctx->pc = 0x223D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D70u, 0x222C48u, 0x222C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C50u;
label_222c50:
    // 0x222c50: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x222c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x222c54: 0xc088ed8  jal         func_223B60
    ctx->pc = 0x222C54u;
    SET_GPR_U32(ctx, 31, 0x222C5Cu);
    ctx->pc = 0x223B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B60u, 0x222C54u, 0x222C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C5Cu;
label_222c5c:
    // 0x222c5c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x222c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x222c60: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x222C60u;
    SET_GPR_U32(ctx, 31, 0x222C68u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x222C60u, 0x222C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C68u;
label_222c68:
    // 0x222c68: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x222c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x222c6c: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x222C6Cu;
    SET_GPR_U32(ctx, 31, 0x222C74u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x222C6Cu, 0x222C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C74u;
label_222c74:
    // 0x222c74: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x222c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x222c78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x222c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x222c7c: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x222c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x222c80: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x222c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222c84: 0xc0888ac  jal         func_2222B0
    ctx->pc = 0x222C84u;
    SET_GPR_U32(ctx, 31, 0x222C8Cu);
    ctx->pc = 0x2222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2222B0u, 0x222C84u, 0x222C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C8Cu;
label_222c8c:
    // 0x222c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c90: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x222C90u;
    {
        const bool branch_taken_0x222c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222c90) {
            ctx->pc = 0x222DF8u;
            goto label_222df8;
        }
    }
    ctx->pc = 0x222C98u;
label_222c98:
    // 0x222c98: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x222c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x222c9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222ca0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222ca4: 0xc088708  jal         func_221C20
    ctx->pc = 0x222CA4u;
    SET_GPR_U32(ctx, 31, 0x222CACu);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x222CA4u, 0x222CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CACu;
label_222cac:
    // 0x222cac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x222CB0u;
    {
        const bool branch_taken_0x222cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222cb0) {
            ctx->pc = 0x222D20u;
            goto label_222d20;
        }
    }
    ctx->pc = 0x222CB8u;
label_222cb8:
    // 0x222cb8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x222cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x222cbc: 0xc088ecc  jal         func_223B30
    ctx->pc = 0x222CBCu;
    SET_GPR_U32(ctx, 31, 0x222CC4u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x222CBCu, 0x222CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CC4u;
label_222cc4:
    // 0x222cc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x222cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222cc8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x222cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222ccc: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x222cccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x222cd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x222cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222cd4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x222cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x222cd8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x222CD8u;
    SET_GPR_U32(ctx, 31, 0x222CE0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x222CD8u, 0x222CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CE0u;
label_222ce0:
    // 0x222ce0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x222ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x222ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ce8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x222CE8u;
    SET_GPR_U32(ctx, 31, 0x222CF0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x222CE8u, 0x222CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CF0u;
label_222cf0:
    // 0x222cf0: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x222cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x222cf4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x222cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x222cf8: 0xc088da0  jal         func_223680
    ctx->pc = 0x222CF8u;
    SET_GPR_U32(ctx, 31, 0x222D00u);
    ctx->pc = 0x223680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223680u, 0x222CF8u, 0x222D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D00u;
label_222d00:
    // 0x222d00: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x222d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x222d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222d08: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x222d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x222d0c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x222d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x222d10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222d14: 0xc08884c  jal         func_222130
    ctx->pc = 0x222D14u;
    SET_GPR_U32(ctx, 31, 0x222D1Cu);
    ctx->pc = 0x222130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222130u, 0x222D14u, 0x222D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D1Cu;
label_222d1c:
    // 0x222d1c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x222d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_222d20:
    // 0x222d20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222d24: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222d28: 0xc088700  jal         func_221C00
    ctx->pc = 0x222D28u;
    SET_GPR_U32(ctx, 31, 0x222D30u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x222D28u, 0x222D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0x1622ffe1  bne         $s1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x222D30u;
    {
        const bool branch_taken_0x222d30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x222d30) {
            ctx->pc = 0x222CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222cb8;
        }
    }
    ctx->pc = 0x222D38u;
    // 0x222d38: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x222d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x222d3c: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x222d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x222d40: 0xc0444e0  jal         func_111380
    ctx->pc = 0x222D40u;
    SET_GPR_U32(ctx, 31, 0x222D48u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x222D40u, 0x222D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D48u;
label_222d48:
    // 0x222d48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222d4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222d50: 0xc088708  jal         func_221C20
    ctx->pc = 0x222D50u;
    SET_GPR_U32(ctx, 31, 0x222D58u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x222D50u, 0x222D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D58u;
label_222d58:
    // 0x222d58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x222D5Cu;
    {
        const bool branch_taken_0x222d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222d5c) {
            ctx->pc = 0x222DA4u;
            goto label_222da4;
        }
    }
    ctx->pc = 0x222D64u;
label_222d64:
    // 0x222d64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x222d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222d68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222D68u;
    {
        const bool branch_taken_0x222d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222d68) {
            ctx->pc = 0x222D8Cu;
            goto label_222d8c;
        }
    }
    ctx->pc = 0x222D70u;
    // 0x222d70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x222d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222d74: 0xc088840  jal         func_222100
    ctx->pc = 0x222D74u;
    SET_GPR_U32(ctx, 31, 0x222D7Cu);
    ctx->pc = 0x222100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222100u, 0x222D74u, 0x222D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D7Cu;
label_222d7c:
    // 0x222d7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x222d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x222d80: 0xc119c5c  jal         func_467170
    ctx->pc = 0x222D80u;
    SET_GPR_U32(ctx, 31, 0x222D88u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x222D80u, 0x222D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D88u;
label_222d88:
    // 0x222d88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x222d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_222d8c:
    // 0x222d8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222d90: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d98: 0xc088d74  jal         func_2235D0
    ctx->pc = 0x222D98u;
    SET_GPR_U32(ctx, 31, 0x222DA0u);
    ctx->pc = 0x2235D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235D0u, 0x222D98u, 0x222DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DA0u;
label_222da0:
    // 0x222da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222da4:
    // 0x222da4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222da8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222dac: 0xc088700  jal         func_221C00
    ctx->pc = 0x222DACu;
    SET_GPR_U32(ctx, 31, 0x222DB4u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x222DACu, 0x222DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DB4u;
label_222db4:
    // 0x222db4: 0x1622ffeb  bne         $s1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x222DB4u;
    {
        const bool branch_taken_0x222db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x222db4) {
            ctx->pc = 0x222D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222d64;
        }
    }
    ctx->pc = 0x222DBCu;
    // 0x222dbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222dc0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x222dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222dc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x222DC4u;
    {
        const bool branch_taken_0x222dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222dc4) {
            ctx->pc = 0x222DF4u;
            goto label_222df4;
        }
    }
    ctx->pc = 0x222DCCu;
    // 0x222dcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222dd0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222dd4: 0xc08881c  jal         func_222070
    ctx->pc = 0x222DD4u;
    SET_GPR_U32(ctx, 31, 0x222DDCu);
    ctx->pc = 0x222070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222070u, 0x222DD4u, 0x222DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DDCu;
label_222ddc:
    // 0x222ddc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222de0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222de4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x222DE4u;
    SET_GPR_U32(ctx, 31, 0x222DECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x222DE4u, 0x222DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DECu;
label_222dec:
    // 0x222dec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222df0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x222df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_222df4:
    // 0x222df4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x222df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_222df8:
    // 0x222df8: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222dfc: 0xc0888a4  jal         func_222290
    ctx->pc = 0x222DFCu;
    SET_GPR_U32(ctx, 31, 0x222E04u);
    ctx->pc = 0x222290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222290u, 0x222DFCu, 0x222E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E04u;
label_222e04:
    // 0x222e04: 0x1602ffa4  bne         $s0, $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x222E04u;
    {
        const bool branch_taken_0x222e04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x222e04) {
            ctx->pc = 0x222C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222c98;
        }
    }
    ctx->pc = 0x222E0Cu;
    // 0x222e0c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x222e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x222e10: 0xc088d6c  jal         func_2235B0
    ctx->pc = 0x222E10u;
    SET_GPR_U32(ctx, 31, 0x222E18u);
    ctx->pc = 0x2235B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235B0u, 0x222E10u, 0x222E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E18u;
label_222e18:
    // 0x222e18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x222e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x222e1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e20: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x222e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222e24: 0xc0888ac  jal         func_2222B0
    ctx->pc = 0x222E24u;
    SET_GPR_U32(ctx, 31, 0x222E2Cu);
    ctx->pc = 0x2222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2222B0u, 0x222E24u, 0x222E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E2Cu;
label_222e2c:
    // 0x222e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e30: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x222E30u;
    {
        const bool branch_taken_0x222e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e30) {
            ctx->pc = 0x222F40u;
            goto label_222f40;
        }
    }
    ctx->pc = 0x222E38u;
label_222e38:
    // 0x222e38: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x222e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222e3c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x222E3Cu;
    SET_GPR_U32(ctx, 31, 0x222E44u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x222E3Cu, 0x222E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E44u;
label_222e44:
    // 0x222e44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x222e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222e48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e4c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x222E4Cu;
    SET_GPR_U32(ctx, 31, 0x222E54u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x222E4Cu, 0x222E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E54u;
label_222e54:
    // 0x222e54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e58: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x222E58u;
    {
        const bool branch_taken_0x222e58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e58) {
            ctx->pc = 0x222E70u;
            goto label_222e70;
        }
    }
    ctx->pc = 0x222E60u;
    // 0x222e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x222e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e64: 0xc088710  jal         func_221C40
    ctx->pc = 0x222E64u;
    SET_GPR_U32(ctx, 31, 0x222E6Cu);
    ctx->pc = 0x221C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C40u, 0x222E64u, 0x222E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E6Cu;
label_222e6c:
    // 0x222e6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x222e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222e70:
    // 0x222e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222e74: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x222e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x222e78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222e7c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222e80: 0xc088698  jal         func_221A60
    ctx->pc = 0x222E80u;
    SET_GPR_U32(ctx, 31, 0x222E88u);
    ctx->pc = 0x221A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A60u, 0x222E80u, 0x222E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E88u;
label_222e88:
    // 0x222e88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x222e88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x222E8Cu;
    {
        const bool branch_taken_0x222e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e8c) {
            ctx->pc = 0x222F18u;
            goto label_222f18;
        }
    }
    ctx->pc = 0x222E94u;
label_222e94:
    // 0x222e94: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x222e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x222e98: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x222E98u;
    SET_GPR_U32(ctx, 31, 0x222EA0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x222E98u, 0x222EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EA0u;
label_222ea0:
    // 0x222ea0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x222ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x222ea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ea8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x222EA8u;
    SET_GPR_U32(ctx, 31, 0x222EB0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x222EA8u, 0x222EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EB0u;
label_222eb0:
    // 0x222eb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x222eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222eb4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x222EB4u;
    {
        const bool branch_taken_0x222eb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x222eb4) {
            ctx->pc = 0x222ECCu;
            goto label_222ecc;
        }
    }
    ctx->pc = 0x222EBCu;
    // 0x222ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ec0: 0xc088ecc  jal         func_223B30
    ctx->pc = 0x222EC0u;
    SET_GPR_U32(ctx, 31, 0x222EC8u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x222EC0u, 0x222EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EC8u;
label_222ec8:
    // 0x222ec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x222ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222ecc:
    // 0x222ecc: 0xafb200b8  sw          $s2, 0xB8($sp)
    ctx->pc = 0x222eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 18));
    // 0x222ed0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x222ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x222ed4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x222ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x222ed8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x222ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x222edc: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x222edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x222ee0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x222EE0u;
    SET_GPR_U32(ctx, 31, 0x222EE8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x222EE0u, 0x222EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EE8u;
label_222ee8:
    // 0x222ee8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x222ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x222eec: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x222eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x222ef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ef4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x222EF4u;
    SET_GPR_U32(ctx, 31, 0x222EFCu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x222EF4u, 0x222EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222EFCu;
label_222efc:
    // 0x222efc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x222efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x222f00: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x222f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x222f04: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x222f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x222f08: 0xc088c8c  jal         func_223230
    ctx->pc = 0x222F08u;
    SET_GPR_U32(ctx, 31, 0x222F10u);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x222F08u, 0x222F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F10u;
label_222f10:
    // 0x222f10: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x222f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x222f14: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x222f14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_222f18:
    // 0x222f18: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x222f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x222f1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x222f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f20: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x222F20u;
    SET_GPR_U32(ctx, 31, 0x222F28u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x222F20u, 0x222F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F28u;
label_222f28:
    // 0x222f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x222f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222f2c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x222f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x222f30: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x222F30u;
    {
        const bool branch_taken_0x222f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222f30) {
            ctx->pc = 0x222E94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222e94;
        }
    }
    ctx->pc = 0x222F38u;
    // 0x222f38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x222f38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x222f3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x222f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_222f40:
    // 0x222f40: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x222f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222f44: 0xc0888a4  jal         func_222290
    ctx->pc = 0x222F44u;
    SET_GPR_U32(ctx, 31, 0x222F4Cu);
    ctx->pc = 0x222290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222290u, 0x222F44u, 0x222F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F4Cu;
label_222f4c:
    // 0x222f4c: 0x1602ffba  bne         $s0, $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x222F4Cu;
    {
        const bool branch_taken_0x222f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x222f4c) {
            ctx->pc = 0x222E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222e38;
        }
    }
    ctx->pc = 0x222F54u;
    // 0x222f54: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x222f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x222f58: 0xc088ed8  jal         func_223B60
    ctx->pc = 0x222F58u;
    SET_GPR_U32(ctx, 31, 0x222F60u);
    ctx->pc = 0x223B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B60u, 0x222F58u, 0x222F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F60u;
label_222f60:
    // 0x222f60: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x222f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x222f64: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x222F64u;
    SET_GPR_U32(ctx, 31, 0x222F6Cu);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x222F64u, 0x222F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F6Cu;
label_222f6c:
    // 0x222f6c: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x222f70: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x222f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x222f74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x222f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x222f78: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x222f78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x222f7c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x222f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x222f80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222f84: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x222F84u;
    SET_GPR_U32(ctx, 31, 0x222F8Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x222F84u, 0x222F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F8Cu;
label_222f8c:
    // 0x222f8c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x222f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x222f90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222f94: 0xc088bf4  jal         func_222FD0
    ctx->pc = 0x222F94u;
    SET_GPR_U32(ctx, 31, 0x222F9Cu);
    ctx->pc = 0x222FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FD0u, 0x222F94u, 0x222F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F9Cu;
label_222f9c:
    // 0x222f9c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x222f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222fa0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x222fa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222fa4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x222fa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222fa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x222fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x222facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222fbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x222fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x222fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x222FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222FC8u;
    // 0x222fc8: 0x0  nop
    ctx->pc = 0x222fc8u;
    // NOP
    // 0x222fcc: 0x0  nop
    ctx->pc = 0x222fccu;
    // NOP
    ctx->pc = 0x222fd0u;
}
