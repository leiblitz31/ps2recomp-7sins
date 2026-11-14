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

// Function: sub_004939D0
// Address: 0x4939d0 - 0x493ba0
void sub_004939D0_0x4939d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004939D0_0x4939d0");
#endif

    switch (ctx->pc) {
        case 0x4939d0u: goto label_4939d0;
        case 0x4939d4u: goto label_4939d4;
        case 0x4939d8u: goto label_4939d8;
        case 0x4939dcu: goto label_4939dc;
        case 0x4939e0u: goto label_4939e0;
        case 0x4939e4u: goto label_4939e4;
        case 0x4939e8u: goto label_4939e8;
        case 0x4939ecu: goto label_4939ec;
        case 0x4939f0u: goto label_4939f0;
        case 0x4939f4u: goto label_4939f4;
        case 0x4939f8u: goto label_4939f8;
        case 0x4939fcu: goto label_4939fc;
        case 0x493a00u: goto label_493a00;
        case 0x493a04u: goto label_493a04;
        case 0x493a08u: goto label_493a08;
        case 0x493a0cu: goto label_493a0c;
        case 0x493a10u: goto label_493a10;
        case 0x493a14u: goto label_493a14;
        case 0x493a18u: goto label_493a18;
        case 0x493a1cu: goto label_493a1c;
        case 0x493a20u: goto label_493a20;
        case 0x493a24u: goto label_493a24;
        case 0x493a28u: goto label_493a28;
        case 0x493a2cu: goto label_493a2c;
        case 0x493a30u: goto label_493a30;
        case 0x493a34u: goto label_493a34;
        case 0x493a38u: goto label_493a38;
        case 0x493a3cu: goto label_493a3c;
        case 0x493a40u: goto label_493a40;
        case 0x493a44u: goto label_493a44;
        case 0x493a48u: goto label_493a48;
        case 0x493a4cu: goto label_493a4c;
        case 0x493a50u: goto label_493a50;
        case 0x493a54u: goto label_493a54;
        case 0x493a58u: goto label_493a58;
        case 0x493a5cu: goto label_493a5c;
        case 0x493a60u: goto label_493a60;
        case 0x493a64u: goto label_493a64;
        case 0x493a68u: goto label_493a68;
        case 0x493a6cu: goto label_493a6c;
        case 0x493a70u: goto label_493a70;
        case 0x493a74u: goto label_493a74;
        case 0x493a78u: goto label_493a78;
        case 0x493a7cu: goto label_493a7c;
        case 0x493a80u: goto label_493a80;
        case 0x493a84u: goto label_493a84;
        case 0x493a88u: goto label_493a88;
        case 0x493a8cu: goto label_493a8c;
        case 0x493a90u: goto label_493a90;
        case 0x493a94u: goto label_493a94;
        case 0x493a98u: goto label_493a98;
        case 0x493a9cu: goto label_493a9c;
        case 0x493aa0u: goto label_493aa0;
        case 0x493aa4u: goto label_493aa4;
        case 0x493aa8u: goto label_493aa8;
        case 0x493aacu: goto label_493aac;
        case 0x493ab0u: goto label_493ab0;
        case 0x493ab4u: goto label_493ab4;
        case 0x493ab8u: goto label_493ab8;
        case 0x493abcu: goto label_493abc;
        case 0x493ac0u: goto label_493ac0;
        case 0x493ac4u: goto label_493ac4;
        case 0x493ac8u: goto label_493ac8;
        case 0x493accu: goto label_493acc;
        case 0x493ad0u: goto label_493ad0;
        case 0x493ad4u: goto label_493ad4;
        case 0x493ad8u: goto label_493ad8;
        case 0x493adcu: goto label_493adc;
        case 0x493ae0u: goto label_493ae0;
        case 0x493ae4u: goto label_493ae4;
        case 0x493ae8u: goto label_493ae8;
        case 0x493aecu: goto label_493aec;
        case 0x493af0u: goto label_493af0;
        case 0x493af4u: goto label_493af4;
        case 0x493af8u: goto label_493af8;
        case 0x493afcu: goto label_493afc;
        case 0x493b00u: goto label_493b00;
        case 0x493b04u: goto label_493b04;
        case 0x493b08u: goto label_493b08;
        case 0x493b0cu: goto label_493b0c;
        case 0x493b10u: goto label_493b10;
        case 0x493b14u: goto label_493b14;
        case 0x493b18u: goto label_493b18;
        case 0x493b1cu: goto label_493b1c;
        case 0x493b20u: goto label_493b20;
        case 0x493b24u: goto label_493b24;
        case 0x493b28u: goto label_493b28;
        case 0x493b2cu: goto label_493b2c;
        case 0x493b30u: goto label_493b30;
        case 0x493b34u: goto label_493b34;
        case 0x493b38u: goto label_493b38;
        case 0x493b3cu: goto label_493b3c;
        case 0x493b40u: goto label_493b40;
        case 0x493b44u: goto label_493b44;
        case 0x493b48u: goto label_493b48;
        case 0x493b4cu: goto label_493b4c;
        case 0x493b50u: goto label_493b50;
        case 0x493b54u: goto label_493b54;
        case 0x493b58u: goto label_493b58;
        case 0x493b5cu: goto label_493b5c;
        case 0x493b60u: goto label_493b60;
        case 0x493b64u: goto label_493b64;
        case 0x493b68u: goto label_493b68;
        case 0x493b6cu: goto label_493b6c;
        case 0x493b70u: goto label_493b70;
        case 0x493b74u: goto label_493b74;
        case 0x493b78u: goto label_493b78;
        case 0x493b7cu: goto label_493b7c;
        case 0x493b80u: goto label_493b80;
        case 0x493b84u: goto label_493b84;
        case 0x493b88u: goto label_493b88;
        case 0x493b8cu: goto label_493b8c;
        case 0x493b90u: goto label_493b90;
        case 0x493b94u: goto label_493b94;
        case 0x493b98u: goto label_493b98;
        case 0x493b9cu: goto label_493b9c;
        default: break;
    }

    ctx->pc = 0x4939d0u;

label_4939d0:
    // 0x4939d0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x4939d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_4939d4:
    // 0x4939d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4939d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4939d8:
    // 0x4939d8: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x4939d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_4939dc:
    // 0x4939dc: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x4939dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
label_4939e0:
    // 0x4939e0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x4939e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4939e4:
    // 0x4939e4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4939e8:
    if (ctx->pc == 0x4939E8u) {
        ctx->pc = 0x4939ECu;
        goto label_4939ec;
    }
    ctx->pc = 0x4939E4u;
    {
        const bool branch_taken_0x4939e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4939e4) {
            ctx->pc = 0x493A90u;
            goto label_493a90;
        }
    }
    ctx->pc = 0x4939ECu;
label_4939ec:
    // 0x4939ec: 0x8f82b718  lw          $v0, -0x48E8($gp)
    ctx->pc = 0x4939ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948632)));
label_4939f0:
    // 0x4939f0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4939f4:
    if (ctx->pc == 0x4939F4u) {
        ctx->pc = 0x4939F8u;
        goto label_4939f8;
    }
    ctx->pc = 0x4939F0u;
    {
        const bool branch_taken_0x4939f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4939f0) {
            ctx->pc = 0x493A90u;
            goto label_493a90;
        }
    }
    ctx->pc = 0x4939F8u;
label_4939f8:
    // 0x4939f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4939f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4939fc:
    // 0x4939fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4939fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493a00:
    // 0x493a00: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x493a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_493a04:
    // 0x493a04: 0xc115ee8  jal         func_457BA0
label_493a08:
    if (ctx->pc == 0x493A08u) {
        ctx->pc = 0x493A0Cu;
        goto label_493a0c;
    }
    ctx->pc = 0x493A04u;
    SET_GPR_U32(ctx, 31, 0x493A0Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x493A04u, 0x493A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493A0Cu;
label_493a0c:
    // 0x493a0c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_493a10:
    if (ctx->pc == 0x493A10u) {
        ctx->pc = 0x493A14u;
        goto label_493a14;
    }
    ctx->pc = 0x493A0Cu;
    {
        const bool branch_taken_0x493a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493a0c) {
            ctx->pc = 0x493A90u;
            goto label_493a90;
        }
    }
    ctx->pc = 0x493A14u;
label_493a14:
    // 0x493a14: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x493a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_493a18:
    // 0x493a18: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_493a1c:
    if (ctx->pc == 0x493A1Cu) {
        ctx->pc = 0x493A20u;
        goto label_493a20;
    }
    ctx->pc = 0x493A18u;
    {
        const bool branch_taken_0x493a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493a18) {
            ctx->pc = 0x493A90u;
            goto label_493a90;
        }
    }
    ctx->pc = 0x493A20u;
label_493a20:
    // 0x493a20: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x493a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_493a24:
    // 0x493a24: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493a28:
    // 0x493a28: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x493a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_493a2c:
    // 0x493a2c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x493a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_493a30:
    // 0x493a30: 0x24e75080  addiu       $a3, $a3, 0x5080
    ctx->pc = 0x493a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20608));
label_493a34:
    // 0x493a34: 0x2408012b  addiu       $t0, $zero, 0x12B
    ctx->pc = 0x493a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_493a38:
    // 0x493a38: 0x2789b710  addiu       $t1, $gp, -0x48F0
    ctx->pc = 0x493a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948624));
label_493a3c:
    // 0x493a3c: 0xc113940  jal         func_44E500
label_493a40:
    if (ctx->pc == 0x493A40u) {
        ctx->pc = 0x493A44u;
        goto label_493a44;
    }
    ctx->pc = 0x493A3Cu;
    SET_GPR_U32(ctx, 31, 0x493A44u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x493A3Cu, 0x493A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493A44u;
label_493a44:
    // 0x493a44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x493a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_493a48:
    // 0x493a48: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x493a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_493a4c:
    // 0x493a4c: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x493a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_493a50:
    // 0x493a50: 0xc115c24  jal         func_457090
label_493a54:
    if (ctx->pc == 0x493A54u) {
        ctx->pc = 0x493A58u;
        goto label_493a58;
    }
    ctx->pc = 0x493A50u;
    SET_GPR_U32(ctx, 31, 0x493A58u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x493A50u, 0x493A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493A58u;
label_493a58:
    // 0x493a58: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x493a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_493a5c:
    // 0x493a5c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x493a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_493a60:
    // 0x493a60: 0x40f809  jalr        $v0
label_493a64:
    if (ctx->pc == 0x493A64u) {
        ctx->pc = 0x493A68u;
        goto label_493a68;
    }
    ctx->pc = 0x493A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x493A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493A60u, 0x493A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x493A68u;
label_493a68:
    // 0x493a68: 0xaf82b718  sw          $v0, -0x48E8($gp)
    ctx->pc = 0x493a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948632), GPR_U32(ctx, 2));
label_493a6c:
    // 0x493a6c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x493a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_493a70:
    // 0x493a70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493a74:
    if (ctx->pc == 0x493A74u) {
        ctx->pc = 0x493A78u;
        goto label_493a78;
    }
    ctx->pc = 0x493A70u;
    {
        const bool branch_taken_0x493a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493a70) {
            ctx->pc = 0x493A80u;
            goto label_493a80;
        }
    }
    ctx->pc = 0x493A78u;
label_493a78:
    // 0x493a78: 0xd  break       0
    ctx->pc = 0x493a78u;
    runtime->handleBreak(rdram, ctx);
label_493a7c:
    // 0x493a7c: 0x0  nop
    ctx->pc = 0x493a7cu;
    // NOP
label_493a80:
    // 0x493a80: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x493a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_493a84:
    // 0x493a84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x493a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_493a88:
    // 0x493a88: 0xc11392c  jal         func_44E4B0
label_493a8c:
    if (ctx->pc == 0x493A8Cu) {
        ctx->pc = 0x493A90u;
        goto label_493a90;
    }
    ctx->pc = 0x493A88u;
    SET_GPR_U32(ctx, 31, 0x493A90u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x493A88u, 0x493A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493A90u;
label_493a90:
    // 0x493a90: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x493a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_493a94:
    // 0x493a94: 0xc0e2876  jal         func_38A1D8
label_493a98:
    if (ctx->pc == 0x493A98u) {
        ctx->pc = 0x493A9Cu;
        goto label_493a9c;
    }
    ctx->pc = 0x493A94u;
    SET_GPR_U32(ctx, 31, 0x493A9Cu);
    ctx->pc = 0x38A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A1D8u, 0x493A94u, 0x493A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493A9Cu;
label_493a9c:
    // 0x493a9c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x493a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_493aa0:
    // 0x493aa0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x493aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_493aa4:
    // 0x493aa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x493aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_493aa8:
    // 0x493aa8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_493aac:
    if (ctx->pc == 0x493AACu) {
        ctx->pc = 0x493AB0u;
        goto label_493ab0;
    }
    ctx->pc = 0x493AA8u;
    {
        const bool branch_taken_0x493aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493aa8) {
            ctx->pc = 0x493B5Cu;
            goto label_493b5c;
        }
    }
    ctx->pc = 0x493AB0u;
label_493ab0:
    // 0x493ab0: 0x8f82b71c  lw          $v0, -0x48E4($gp)
    ctx->pc = 0x493ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948636)));
label_493ab4:
    // 0x493ab4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_493ab8:
    if (ctx->pc == 0x493AB8u) {
        ctx->pc = 0x493ABCu;
        goto label_493abc;
    }
    ctx->pc = 0x493AB4u;
    {
        const bool branch_taken_0x493ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ab4) {
            ctx->pc = 0x493B5Cu;
            goto label_493b5c;
        }
    }
    ctx->pc = 0x493ABCu;
label_493abc:
    // 0x493abc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x493abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_493ac0:
    // 0x493ac0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493ac4:
    // 0x493ac4: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x493ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_493ac8:
    // 0x493ac8: 0xc115ee8  jal         func_457BA0
label_493acc:
    if (ctx->pc == 0x493ACCu) {
        ctx->pc = 0x493AD0u;
        goto label_493ad0;
    }
    ctx->pc = 0x493AC8u;
    SET_GPR_U32(ctx, 31, 0x493AD0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x493AC8u, 0x493AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493AD0u;
label_493ad0:
    // 0x493ad0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_493ad4:
    if (ctx->pc == 0x493AD4u) {
        ctx->pc = 0x493AD8u;
        goto label_493ad8;
    }
    ctx->pc = 0x493AD0u;
    {
        const bool branch_taken_0x493ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ad0) {
            ctx->pc = 0x493B5Cu;
            goto label_493b5c;
        }
    }
    ctx->pc = 0x493AD8u;
label_493ad8:
    // 0x493ad8: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x493ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_493adc:
    // 0x493adc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_493ae0:
    if (ctx->pc == 0x493AE0u) {
        ctx->pc = 0x493AE4u;
        goto label_493ae4;
    }
    ctx->pc = 0x493ADCu;
    {
        const bool branch_taken_0x493adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493adc) {
            ctx->pc = 0x493B5Cu;
            goto label_493b5c;
        }
    }
    ctx->pc = 0x493AE4u;
label_493ae4:
    // 0x493ae4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x493ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493ae8:
    // 0x493ae8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x493ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_493aec:
    // 0x493aec: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x493aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_493af0:
    // 0x493af0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x493af0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_493af4:
    // 0x493af4: 0x24e75080  addiu       $a3, $a3, 0x5080
    ctx->pc = 0x493af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20608));
label_493af8:
    // 0x493af8: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x493af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_493afc:
    // 0x493afc: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x493afcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_493b00:
    // 0x493b00: 0x252950c0  addiu       $t1, $t1, 0x50C0
    ctx->pc = 0x493b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20672));
label_493b04:
    // 0x493b04: 0xc113940  jal         func_44E500
label_493b08:
    if (ctx->pc == 0x493B08u) {
        ctx->pc = 0x493B0Cu;
        goto label_493b0c;
    }
    ctx->pc = 0x493B04u;
    SET_GPR_U32(ctx, 31, 0x493B0Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x493B04u, 0x493B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493B0Cu;
label_493b0c:
    // 0x493b0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x493b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493b10:
    // 0x493b10: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x493b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_493b14:
    // 0x493b14: 0x24a550f0  addiu       $a1, $a1, 0x50F0
    ctx->pc = 0x493b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20720));
label_493b18:
    // 0x493b18: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x493b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_493b1c:
    // 0x493b1c: 0xc115c24  jal         func_457090
label_493b20:
    if (ctx->pc == 0x493B20u) {
        ctx->pc = 0x493B24u;
        goto label_493b24;
    }
    ctx->pc = 0x493B1Cu;
    SET_GPR_U32(ctx, 31, 0x493B24u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x493B1Cu, 0x493B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493B24u;
label_493b24:
    // 0x493b24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x493b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493b28:
    // 0x493b28: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x493b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_493b2c:
    // 0x493b2c: 0x40f809  jalr        $v0
label_493b30:
    if (ctx->pc == 0x493B30u) {
        ctx->pc = 0x493B34u;
        goto label_493b34;
    }
    ctx->pc = 0x493B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x493B34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493B2Cu, 0x493B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x493B34u;
label_493b34:
    // 0x493b34: 0xaf82b71c  sw          $v0, -0x48E4($gp)
    ctx->pc = 0x493b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948636), GPR_U32(ctx, 2));
label_493b38:
    // 0x493b38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_493b3c:
    // 0x493b3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_493b40:
    if (ctx->pc == 0x493B40u) {
        ctx->pc = 0x493B44u;
        goto label_493b44;
    }
    ctx->pc = 0x493B3Cu;
    {
        const bool branch_taken_0x493b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493b3c) {
            ctx->pc = 0x493B4Cu;
            goto label_493b4c;
        }
    }
    ctx->pc = 0x493B44u;
label_493b44:
    // 0x493b44: 0xd  break       0
    ctx->pc = 0x493b44u;
    runtime->handleBreak(rdram, ctx);
label_493b48:
    // 0x493b48: 0x0  nop
    ctx->pc = 0x493b48u;
    // NOP
label_493b4c:
    // 0x493b4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x493b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_493b50:
    // 0x493b50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x493b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_493b54:
    // 0x493b54: 0xc11392c  jal         func_44E4B0
label_493b58:
    if (ctx->pc == 0x493B58u) {
        ctx->pc = 0x493B5Cu;
        goto label_493b5c;
    }
    ctx->pc = 0x493B54u;
    SET_GPR_U32(ctx, 31, 0x493B5Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x493B54u, 0x493B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493B5Cu;
label_493b5c:
    // 0x493b5c: 0xaf80c104  sw          $zero, -0x3EFC($gp)
    ctx->pc = 0x493b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951172), GPR_U32(ctx, 0));
label_493b60:
    // 0x493b60: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x493b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_493b64:
    // 0x493b64: 0xaf82c108  sw          $v0, -0x3EF8($gp)
    ctx->pc = 0x493b64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951176), GPR_U32(ctx, 2));
label_493b68:
    // 0x493b68: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x493b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_493b6c:
    // 0x493b6c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x493b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_493b70:
    // 0x493b70: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x493b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_493b74:
    // 0x493b74: 0x24a53ba0  addiu       $a1, $a1, 0x3BA0
    ctx->pc = 0x493b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
label_493b78:
    // 0x493b78: 0x27a6026c  addiu       $a2, $sp, 0x26C
    ctx->pc = 0x493b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_493b7c:
    // 0x493b7c: 0xc0e2628  jal         func_3898A0
label_493b80:
    if (ctx->pc == 0x493B80u) {
        ctx->pc = 0x493B84u;
        goto label_493b84;
    }
    ctx->pc = 0x493B7Cu;
    SET_GPR_U32(ctx, 31, 0x493B84u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x493B7Cu, 0x493B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493B84u;
label_493b84:
    // 0x493b84: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x493b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_493b88:
    // 0x493b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x493b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_493b8c:
    // 0x493b8c: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x493b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_493b90:
    // 0x493b90: 0x3e00008  jr          $ra
label_493b94:
    if (ctx->pc == 0x493B94u) {
        ctx->pc = 0x493B98u;
        goto label_493b98;
    }
    ctx->pc = 0x493B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493B98u;
label_493b98:
    // 0x493b98: 0x0  nop
    ctx->pc = 0x493b98u;
    // NOP
label_493b9c:
    // 0x493b9c: 0x0  nop
    ctx->pc = 0x493b9cu;
    // NOP
    ctx->pc = 0x493ba0u;
}
