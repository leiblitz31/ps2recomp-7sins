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

// Function: sub_00279B90
// Address: 0x279b90 - 0x279cc0
void sub_00279B90_0x279b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279B90_0x279b90");
#endif

    switch (ctx->pc) {
        case 0x279b90u: goto label_279b90;
        case 0x279b94u: goto label_279b94;
        case 0x279b98u: goto label_279b98;
        case 0x279b9cu: goto label_279b9c;
        case 0x279ba0u: goto label_279ba0;
        case 0x279ba4u: goto label_279ba4;
        case 0x279ba8u: goto label_279ba8;
        case 0x279bacu: goto label_279bac;
        case 0x279bb0u: goto label_279bb0;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bb8u: goto label_279bb8;
        case 0x279bbcu: goto label_279bbc;
        case 0x279bc0u: goto label_279bc0;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bc8u: goto label_279bc8;
        case 0x279bccu: goto label_279bcc;
        case 0x279bd0u: goto label_279bd0;
        case 0x279bd4u: goto label_279bd4;
        case 0x279bd8u: goto label_279bd8;
        case 0x279bdcu: goto label_279bdc;
        case 0x279be0u: goto label_279be0;
        case 0x279be4u: goto label_279be4;
        case 0x279be8u: goto label_279be8;
        case 0x279becu: goto label_279bec;
        case 0x279bf0u: goto label_279bf0;
        case 0x279bf4u: goto label_279bf4;
        case 0x279bf8u: goto label_279bf8;
        case 0x279bfcu: goto label_279bfc;
        case 0x279c00u: goto label_279c00;
        case 0x279c04u: goto label_279c04;
        case 0x279c08u: goto label_279c08;
        case 0x279c0cu: goto label_279c0c;
        case 0x279c10u: goto label_279c10;
        case 0x279c14u: goto label_279c14;
        case 0x279c18u: goto label_279c18;
        case 0x279c1cu: goto label_279c1c;
        case 0x279c20u: goto label_279c20;
        case 0x279c24u: goto label_279c24;
        case 0x279c28u: goto label_279c28;
        case 0x279c2cu: goto label_279c2c;
        case 0x279c30u: goto label_279c30;
        case 0x279c34u: goto label_279c34;
        case 0x279c38u: goto label_279c38;
        case 0x279c3cu: goto label_279c3c;
        case 0x279c40u: goto label_279c40;
        case 0x279c44u: goto label_279c44;
        case 0x279c48u: goto label_279c48;
        case 0x279c4cu: goto label_279c4c;
        case 0x279c50u: goto label_279c50;
        case 0x279c54u: goto label_279c54;
        case 0x279c58u: goto label_279c58;
        case 0x279c5cu: goto label_279c5c;
        case 0x279c60u: goto label_279c60;
        case 0x279c64u: goto label_279c64;
        case 0x279c68u: goto label_279c68;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c70u: goto label_279c70;
        case 0x279c74u: goto label_279c74;
        case 0x279c78u: goto label_279c78;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c80u: goto label_279c80;
        case 0x279c84u: goto label_279c84;
        case 0x279c88u: goto label_279c88;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c90u: goto label_279c90;
        case 0x279c94u: goto label_279c94;
        case 0x279c98u: goto label_279c98;
        case 0x279c9cu: goto label_279c9c;
        case 0x279ca0u: goto label_279ca0;
        case 0x279ca4u: goto label_279ca4;
        case 0x279ca8u: goto label_279ca8;
        case 0x279cacu: goto label_279cac;
        case 0x279cb0u: goto label_279cb0;
        case 0x279cb4u: goto label_279cb4;
        case 0x279cb8u: goto label_279cb8;
        case 0x279cbcu: goto label_279cbc;
        default: break;
    }

    ctx->pc = 0x279b90u;

label_279b90:
    // 0x279b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_279b94:
    // 0x279b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279b98:
    // 0x279b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_279b9c:
    // 0x279b9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279ba0:
    // 0x279ba0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_279ba4:
    // 0x279ba4: 0xc0aac88  jal         func_2AB220
label_279ba8:
    if (ctx->pc == 0x279BA8u) {
        ctx->pc = 0x279BACu;
        goto label_279bac;
    }
    ctx->pc = 0x279BA4u;
    SET_GPR_U32(ctx, 31, 0x279BACu);
    ctx->pc = 0x2AB220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB220u, 0x279BA4u, 0x279BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BACu;
label_279bac:
    // 0x279bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279bb0:
    // 0x279bb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_279bb4:
    // 0x279bb4: 0x3e00008  jr          $ra
label_279bb8:
    if (ctx->pc == 0x279BB8u) {
        ctx->pc = 0x279BBCu;
        goto label_279bbc;
    }
    ctx->pc = 0x279BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279BBCu;
label_279bbc:
    // 0x279bbc: 0x0  nop
    ctx->pc = 0x279bbcu;
    // NOP
label_279bc0:
    // 0x279bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x279bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_279bc4:
    // 0x279bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_279bc8:
    // 0x279bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_279bcc:
    // 0x279bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_279bd0:
    // 0x279bd0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x279bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_279bd4:
    // 0x279bd4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x279bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_279bd8:
    // 0x279bd8: 0xc0852ac  jal         func_214AB0
label_279bdc:
    if (ctx->pc == 0x279BDCu) {
        ctx->pc = 0x279BE0u;
        goto label_279be0;
    }
    ctx->pc = 0x279BD8u;
    SET_GPR_U32(ctx, 31, 0x279BE0u);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x279BD8u, 0x279BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BE0u;
label_279be0:
    // 0x279be0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x279be0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_279be4:
    // 0x279be4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_279be8:
    // 0x279be8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x279be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279bec:
    // 0x279bec: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_279bf0:
    if (ctx->pc == 0x279BF0u) {
        ctx->pc = 0x279BF4u;
        goto label_279bf4;
    }
    ctx->pc = 0x279BECu;
    {
        const bool branch_taken_0x279bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x279bec) {
            ctx->pc = 0x279C20u;
            goto label_279c20;
        }
    }
    ctx->pc = 0x279BF4u;
label_279bf4:
    // 0x279bf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_279bf8:
    // 0x279bf8: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x279bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279bfc:
    // 0x279bfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279c00:
    // 0x279c00: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x279c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_279c04:
    // 0x279c04: 0x320f809  jalr        $t9
label_279c08:
    if (ctx->pc == 0x279C08u) {
        ctx->pc = 0x279C0Cu;
        goto label_279c0c;
    }
    ctx->pc = 0x279C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279C0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C04u, 0x279C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279C0Cu;
label_279c0c:
    // 0x279c0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_279c10:
    // 0x279c10: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x279c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279c14:
    // 0x279c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279c18:
    // 0x279c18: 0xc0a6b0c  jal         func_29AC30
label_279c1c:
    if (ctx->pc == 0x279C1Cu) {
        ctx->pc = 0x279C20u;
        goto label_279c20;
    }
    ctx->pc = 0x279C18u;
    SET_GPR_U32(ctx, 31, 0x279C20u);
    ctx->pc = 0x29AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC30u, 0x279C18u, 0x279C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C20u;
label_279c20:
    // 0x279c20: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x279c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_279c24:
    // 0x279c24: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x279c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_279c28:
    // 0x279c28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279c2c:
    // 0x279c2c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x279c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_279c30:
    // 0x279c30: 0x320f809  jalr        $t9
label_279c34:
    if (ctx->pc == 0x279C34u) {
        ctx->pc = 0x279C38u;
        goto label_279c38;
    }
    ctx->pc = 0x279C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279C38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C30u, 0x279C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279C38u;
label_279c38:
    // 0x279c38: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x279c38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_279c3c:
    // 0x279c3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x279c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_279c40:
    // 0x279c40: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_279c44:
    // 0x279c44: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x279c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
label_279c48:
    // 0x279c48: 0xc040304  jal         func_100C10
label_279c4c:
    if (ctx->pc == 0x279C4Cu) {
        ctx->pc = 0x279C50u;
        goto label_279c50;
    }
    ctx->pc = 0x279C48u;
    SET_GPR_U32(ctx, 31, 0x279C50u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x279C48u, 0x279C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C50u;
label_279c50:
    // 0x279c50: 0xc122470  jal         func_4891C0
label_279c54:
    if (ctx->pc == 0x279C54u) {
        ctx->pc = 0x279C58u;
        goto label_279c58;
    }
    ctx->pc = 0x279C50u;
    SET_GPR_U32(ctx, 31, 0x279C58u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x279C50u, 0x279C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C58u;
label_279c58:
    // 0x279c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x279c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279c5c:
    // 0x279c5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x279c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_279c60:
    // 0x279c60: 0xc123894  jal         func_48E250
label_279c64:
    if (ctx->pc == 0x279C64u) {
        ctx->pc = 0x279C68u;
        goto label_279c68;
    }
    ctx->pc = 0x279C60u;
    SET_GPR_U32(ctx, 31, 0x279C68u);
    ctx->pc = 0x48E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E250u, 0x279C60u, 0x279C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C68u;
label_279c68:
    // 0x279c68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x279c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_279c6c:
    // 0x279c6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_279c70:
    // 0x279c70: 0xc0402d4  jal         func_100B50
label_279c74:
    if (ctx->pc == 0x279C74u) {
        ctx->pc = 0x279C78u;
        goto label_279c78;
    }
    ctx->pc = 0x279C70u;
    SET_GPR_U32(ctx, 31, 0x279C78u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x279C70u, 0x279C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C78u;
label_279c78:
    // 0x279c78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_279c7c:
    // 0x279c7c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x279c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_279c80:
    // 0x279c80: 0xc09e784  jal         func_279E10
label_279c84:
    if (ctx->pc == 0x279C84u) {
        ctx->pc = 0x279C88u;
        goto label_279c88;
    }
    ctx->pc = 0x279C80u;
    SET_GPR_U32(ctx, 31, 0x279C88u);
    ctx->pc = 0x279E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E10u, 0x279C80u, 0x279C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C88u;
label_279c88:
    // 0x279c88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x279c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_279c8c:
    // 0x279c8c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x279c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_279c90:
    // 0x279c90: 0xc09e730  jal         func_279CC0
label_279c94:
    if (ctx->pc == 0x279C94u) {
        ctx->pc = 0x279C98u;
        goto label_279c98;
    }
    ctx->pc = 0x279C90u;
    SET_GPR_U32(ctx, 31, 0x279C98u);
    ctx->pc = 0x279CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CC0u, 0x279C90u, 0x279C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C98u;
label_279c98:
    // 0x279c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279c9c:
    // 0x279c9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_279ca0:
    // 0x279ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279ca4:
    // 0x279ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_279ca8:
    // 0x279ca8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x279ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_279cac:
    // 0x279cac: 0x3e00008  jr          $ra
label_279cb0:
    if (ctx->pc == 0x279CB0u) {
        ctx->pc = 0x279CB4u;
        goto label_279cb4;
    }
    ctx->pc = 0x279CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279CB4u;
label_279cb4:
    // 0x279cb4: 0x0  nop
    ctx->pc = 0x279cb4u;
    // NOP
label_279cb8:
    // 0x279cb8: 0x0  nop
    ctx->pc = 0x279cb8u;
    // NOP
label_279cbc:
    // 0x279cbc: 0x0  nop
    ctx->pc = 0x279cbcu;
    // NOP
    ctx->pc = 0x279cc0u;
}
