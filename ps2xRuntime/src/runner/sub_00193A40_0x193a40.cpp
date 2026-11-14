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

// Function: sub_00193A40
// Address: 0x193a40 - 0x193c90
void sub_00193A40_0x193a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193A40_0x193a40");
#endif

    switch (ctx->pc) {
        case 0x193a40u: goto label_193a40;
        case 0x193a44u: goto label_193a44;
        case 0x193a48u: goto label_193a48;
        case 0x193a4cu: goto label_193a4c;
        case 0x193a50u: goto label_193a50;
        case 0x193a54u: goto label_193a54;
        case 0x193a58u: goto label_193a58;
        case 0x193a5cu: goto label_193a5c;
        case 0x193a60u: goto label_193a60;
        case 0x193a64u: goto label_193a64;
        case 0x193a68u: goto label_193a68;
        case 0x193a6cu: goto label_193a6c;
        case 0x193a70u: goto label_193a70;
        case 0x193a74u: goto label_193a74;
        case 0x193a78u: goto label_193a78;
        case 0x193a7cu: goto label_193a7c;
        case 0x193a80u: goto label_193a80;
        case 0x193a84u: goto label_193a84;
        case 0x193a88u: goto label_193a88;
        case 0x193a8cu: goto label_193a8c;
        case 0x193a90u: goto label_193a90;
        case 0x193a94u: goto label_193a94;
        case 0x193a98u: goto label_193a98;
        case 0x193a9cu: goto label_193a9c;
        case 0x193aa0u: goto label_193aa0;
        case 0x193aa4u: goto label_193aa4;
        case 0x193aa8u: goto label_193aa8;
        case 0x193aacu: goto label_193aac;
        case 0x193ab0u: goto label_193ab0;
        case 0x193ab4u: goto label_193ab4;
        case 0x193ab8u: goto label_193ab8;
        case 0x193abcu: goto label_193abc;
        case 0x193ac0u: goto label_193ac0;
        case 0x193ac4u: goto label_193ac4;
        case 0x193ac8u: goto label_193ac8;
        case 0x193accu: goto label_193acc;
        case 0x193ad0u: goto label_193ad0;
        case 0x193ad4u: goto label_193ad4;
        case 0x193ad8u: goto label_193ad8;
        case 0x193adcu: goto label_193adc;
        case 0x193ae0u: goto label_193ae0;
        case 0x193ae4u: goto label_193ae4;
        case 0x193ae8u: goto label_193ae8;
        case 0x193aecu: goto label_193aec;
        case 0x193af0u: goto label_193af0;
        case 0x193af4u: goto label_193af4;
        case 0x193af8u: goto label_193af8;
        case 0x193afcu: goto label_193afc;
        case 0x193b00u: goto label_193b00;
        case 0x193b04u: goto label_193b04;
        case 0x193b08u: goto label_193b08;
        case 0x193b0cu: goto label_193b0c;
        case 0x193b10u: goto label_193b10;
        case 0x193b14u: goto label_193b14;
        case 0x193b18u: goto label_193b18;
        case 0x193b1cu: goto label_193b1c;
        case 0x193b20u: goto label_193b20;
        case 0x193b24u: goto label_193b24;
        case 0x193b28u: goto label_193b28;
        case 0x193b2cu: goto label_193b2c;
        case 0x193b30u: goto label_193b30;
        case 0x193b34u: goto label_193b34;
        case 0x193b38u: goto label_193b38;
        case 0x193b3cu: goto label_193b3c;
        case 0x193b40u: goto label_193b40;
        case 0x193b44u: goto label_193b44;
        case 0x193b48u: goto label_193b48;
        case 0x193b4cu: goto label_193b4c;
        case 0x193b50u: goto label_193b50;
        case 0x193b54u: goto label_193b54;
        case 0x193b58u: goto label_193b58;
        case 0x193b5cu: goto label_193b5c;
        case 0x193b60u: goto label_193b60;
        case 0x193b64u: goto label_193b64;
        case 0x193b68u: goto label_193b68;
        case 0x193b6cu: goto label_193b6c;
        case 0x193b70u: goto label_193b70;
        case 0x193b74u: goto label_193b74;
        case 0x193b78u: goto label_193b78;
        case 0x193b7cu: goto label_193b7c;
        case 0x193b80u: goto label_193b80;
        case 0x193b84u: goto label_193b84;
        case 0x193b88u: goto label_193b88;
        case 0x193b8cu: goto label_193b8c;
        case 0x193b90u: goto label_193b90;
        case 0x193b94u: goto label_193b94;
        case 0x193b98u: goto label_193b98;
        case 0x193b9cu: goto label_193b9c;
        case 0x193ba0u: goto label_193ba0;
        case 0x193ba4u: goto label_193ba4;
        case 0x193ba8u: goto label_193ba8;
        case 0x193bacu: goto label_193bac;
        case 0x193bb0u: goto label_193bb0;
        case 0x193bb4u: goto label_193bb4;
        case 0x193bb8u: goto label_193bb8;
        case 0x193bbcu: goto label_193bbc;
        case 0x193bc0u: goto label_193bc0;
        case 0x193bc4u: goto label_193bc4;
        case 0x193bc8u: goto label_193bc8;
        case 0x193bccu: goto label_193bcc;
        case 0x193bd0u: goto label_193bd0;
        case 0x193bd4u: goto label_193bd4;
        case 0x193bd8u: goto label_193bd8;
        case 0x193bdcu: goto label_193bdc;
        case 0x193be0u: goto label_193be0;
        case 0x193be4u: goto label_193be4;
        case 0x193be8u: goto label_193be8;
        case 0x193becu: goto label_193bec;
        case 0x193bf0u: goto label_193bf0;
        case 0x193bf4u: goto label_193bf4;
        case 0x193bf8u: goto label_193bf8;
        case 0x193bfcu: goto label_193bfc;
        case 0x193c00u: goto label_193c00;
        case 0x193c04u: goto label_193c04;
        case 0x193c08u: goto label_193c08;
        case 0x193c0cu: goto label_193c0c;
        case 0x193c10u: goto label_193c10;
        case 0x193c14u: goto label_193c14;
        case 0x193c18u: goto label_193c18;
        case 0x193c1cu: goto label_193c1c;
        case 0x193c20u: goto label_193c20;
        case 0x193c24u: goto label_193c24;
        case 0x193c28u: goto label_193c28;
        case 0x193c2cu: goto label_193c2c;
        case 0x193c30u: goto label_193c30;
        case 0x193c34u: goto label_193c34;
        case 0x193c38u: goto label_193c38;
        case 0x193c3cu: goto label_193c3c;
        case 0x193c40u: goto label_193c40;
        case 0x193c44u: goto label_193c44;
        case 0x193c48u: goto label_193c48;
        case 0x193c4cu: goto label_193c4c;
        case 0x193c50u: goto label_193c50;
        case 0x193c54u: goto label_193c54;
        case 0x193c58u: goto label_193c58;
        case 0x193c5cu: goto label_193c5c;
        case 0x193c60u: goto label_193c60;
        case 0x193c64u: goto label_193c64;
        case 0x193c68u: goto label_193c68;
        case 0x193c6cu: goto label_193c6c;
        case 0x193c70u: goto label_193c70;
        case 0x193c74u: goto label_193c74;
        case 0x193c78u: goto label_193c78;
        case 0x193c7cu: goto label_193c7c;
        case 0x193c80u: goto label_193c80;
        case 0x193c84u: goto label_193c84;
        case 0x193c88u: goto label_193c88;
        case 0x193c8cu: goto label_193c8c;
        default: break;
    }

    ctx->pc = 0x193a40u;

label_193a40:
    // 0x193a40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x193a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_193a44:
    // 0x193a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_193a48:
    // 0x193a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_193a4c:
    // 0x193a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_193a50:
    // 0x193a50: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x193a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_193a54:
    // 0x193a54: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x193a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_193a58:
    // 0x193a58: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x193a58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_193a5c:
    // 0x193a5c: 0xe7ad00c0  swc1        $f13, 0xC0($sp)
    ctx->pc = 0x193a5cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_193a60:
    // 0x193a60: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193a64:
    // 0x193a64: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_193a68:
    // 0x193a68: 0x24a55ae0  addiu       $a1, $a1, 0x5AE0
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23264));
label_193a6c:
    // 0x193a6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a70:
    // 0x193a70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x193a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_193a74:
    // 0x193a74: 0x320f809  jalr        $t9
label_193a78:
    if (ctx->pc == 0x193A78u) {
        ctx->pc = 0x193A7Cu;
        goto label_193a7c;
    }
    ctx->pc = 0x193A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A74u, 0x193A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A7Cu;
label_193a7c:
    // 0x193a7c: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_193a80:
    if (ctx->pc == 0x193A80u) {
        ctx->pc = 0x193A84u;
        goto label_193a84;
    }
    ctx->pc = 0x193A7Cu;
    {
        const bool branch_taken_0x193a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193a7c) {
            ctx->pc = 0x193C70u;
            goto label_193c70;
        }
    }
    ctx->pc = 0x193A84u;
label_193a84:
    // 0x193a84: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x193a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_193a88:
    // 0x193a88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x193a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_193a8c:
    // 0x193a8c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_193a90:
    // 0x193a90: 0x24a55b10  addiu       $a1, $a1, 0x5B10
    ctx->pc = 0x193a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23312));
label_193a94:
    // 0x193a94: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x193a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_193a98:
    // 0x193a98: 0xc0bc3e2  jal         func_2F0F88
label_193a9c:
    if (ctx->pc == 0x193A9Cu) {
        ctx->pc = 0x193AA0u;
        goto label_193aa0;
    }
    ctx->pc = 0x193A98u;
    SET_GPR_U32(ctx, 31, 0x193AA0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x193A98u, 0x193AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AA0u;
label_193aa0:
    // 0x193aa0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x193aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_193aa4:
    // 0x193aa4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x193aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_193aa8:
    // 0x193aa8: 0xc08e57c  jal         func_2395F0
label_193aac:
    if (ctx->pc == 0x193AACu) {
        ctx->pc = 0x193AB0u;
        goto label_193ab0;
    }
    ctx->pc = 0x193AA8u;
    SET_GPR_U32(ctx, 31, 0x193AB0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x193AA8u, 0x193AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AB0u;
label_193ab0:
    // 0x193ab0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193ab4:
    // 0x193ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x193ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193ab8:
    // 0x193ab8: 0xc0406d0  jal         func_101B40
label_193abc:
    if (ctx->pc == 0x193ABCu) {
        ctx->pc = 0x193AC0u;
        goto label_193ac0;
    }
    ctx->pc = 0x193AB8u;
    SET_GPR_U32(ctx, 31, 0x193AC0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x193AB8u, 0x193AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AC0u;
label_193ac0:
    // 0x193ac0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_193ac4:
    // 0x193ac4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x193ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_193ac8:
    // 0x193ac8: 0xc064f24  jal         func_193C90
label_193acc:
    if (ctx->pc == 0x193ACCu) {
        ctx->pc = 0x193AD0u;
        goto label_193ad0;
    }
    ctx->pc = 0x193AC8u;
    SET_GPR_U32(ctx, 31, 0x193AD0u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x193AC8u, 0x193AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AD0u;
label_193ad0:
    // 0x193ad0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193ad4:
    // 0x193ad4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_193ad8:
    // 0x193ad8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_193adc:
    // 0x193adc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193ae0:
    // 0x193ae0: 0x27859248  addiu       $a1, $gp, -0x6DB8
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939208));
label_193ae4:
    // 0x193ae4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193ae8:
    // 0x193ae8: 0xc055fb0  jal         func_157EC0
label_193aec:
    if (ctx->pc == 0x193AECu) {
        ctx->pc = 0x193AF0u;
        goto label_193af0;
    }
    ctx->pc = 0x193AE8u;
    SET_GPR_U32(ctx, 31, 0x193AF0u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x193AE8u, 0x193AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AF0u;
label_193af0:
    // 0x193af0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x193af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193af4:
    // 0x193af4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193af8:
    // 0x193af8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_193afc:
    // 0x193afc: 0x24a55b20  addiu       $a1, $a1, 0x5B20
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
label_193b00:
    // 0x193b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193b04:
    // 0x193b04: 0xc0bc3e2  jal         func_2F0F88
label_193b08:
    if (ctx->pc == 0x193B08u) {
        ctx->pc = 0x193B0Cu;
        goto label_193b0c;
    }
    ctx->pc = 0x193B04u;
    SET_GPR_U32(ctx, 31, 0x193B0Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x193B04u, 0x193B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B0Cu;
label_193b0c:
    // 0x193b0c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193b10:
    // 0x193b10: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193b14:
    // 0x193b14: 0xc05621c  jal         func_158870
label_193b18:
    if (ctx->pc == 0x193B18u) {
        ctx->pc = 0x193B1Cu;
        goto label_193b1c;
    }
    ctx->pc = 0x193B14u;
    SET_GPR_U32(ctx, 31, 0x193B1Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x193B14u, 0x193B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B1Cu;
label_193b1c:
    // 0x193b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193b20:
    // 0x193b20: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_193b24:
    if (ctx->pc == 0x193B24u) {
        ctx->pc = 0x193B28u;
        goto label_193b28;
    }
    ctx->pc = 0x193B20u;
    {
        const bool branch_taken_0x193b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193b20) {
            ctx->pc = 0x193C60u;
            goto label_193c60;
        }
    }
    ctx->pc = 0x193B28u;
label_193b28:
    // 0x193b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193b2c:
    // 0x193b2c: 0x0  nop
    ctx->pc = 0x193b2cu;
    // NOP
label_193b30:
    // 0x193b30: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x193b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_193b34:
    // 0x193b34: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193b38:
    // 0x193b38: 0xc0552dc  jal         func_154B70
label_193b3c:
    if (ctx->pc == 0x193B3Cu) {
        ctx->pc = 0x193B40u;
        goto label_193b40;
    }
    ctx->pc = 0x193B38u;
    SET_GPR_U32(ctx, 31, 0x193B40u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193B38u, 0x193B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B40u;
label_193b40:
    // 0x193b40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_193b44:
    // 0x193b44: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x193b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_193b48:
    // 0x193b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193b4c:
    // 0x193b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193b50:
    // 0x193b50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193b54:
    // 0x193b54: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_193b58:
    // 0x193b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193b5c:
    // 0x193b5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193b5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193b60:
    // 0x193b60: 0xc08b9fc  jal         func_22E7F0
label_193b64:
    if (ctx->pc == 0x193B64u) {
        ctx->pc = 0x193B68u;
        goto label_193b68;
    }
    ctx->pc = 0x193B60u;
    SET_GPR_U32(ctx, 31, 0x193B68u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193B60u, 0x193B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B68u;
label_193b68:
    // 0x193b68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_193b6c:
    // 0x193b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193b70:
    // 0x193b70: 0x0  nop
    ctx->pc = 0x193b70u;
    // NOP
label_193b74:
    // 0x193b74: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x193b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_193b78:
    // 0x193b78: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193b7c:
    // 0x193b7c: 0xc0552dc  jal         func_154B70
label_193b80:
    if (ctx->pc == 0x193B80u) {
        ctx->pc = 0x193B84u;
        goto label_193b84;
    }
    ctx->pc = 0x193B7Cu;
    SET_GPR_U32(ctx, 31, 0x193B84u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193B7Cu, 0x193B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B84u;
label_193b84:
    // 0x193b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193b88:
    // 0x193b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193b8c:
    // 0x193b8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193b90:
    // 0x193b90: 0x27a7008c  addiu       $a3, $sp, 0x8C
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_193b94:
    // 0x193b94: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x193b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193b98:
    // 0x193b98: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x193b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_193b9c:
    // 0x193b9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193ba0:
    // 0x193ba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193ba4:
    // 0x193ba4: 0xc08b9fc  jal         func_22E7F0
label_193ba8:
    if (ctx->pc == 0x193BA8u) {
        ctx->pc = 0x193BACu;
        goto label_193bac;
    }
    ctx->pc = 0x193BA4u;
    SET_GPR_U32(ctx, 31, 0x193BACu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193BA4u, 0x193BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BACu;
label_193bac:
    // 0x193bac: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x193bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_193bb0:
    // 0x193bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193bb4:
    // 0x193bb4: 0x0  nop
    ctx->pc = 0x193bb4u;
    // NOP
label_193bb8:
    // 0x193bb8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x193bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_193bbc:
    // 0x193bbc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x193bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_193bc0:
    // 0x193bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193bc4:
    // 0x193bc4: 0x0  nop
    ctx->pc = 0x193bc4u;
    // NOP
label_193bc8:
    // 0x193bc8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x193bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_193bcc:
    // 0x193bcc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193bd0:
    // 0x193bd0: 0xc0552dc  jal         func_154B70
label_193bd4:
    if (ctx->pc == 0x193BD4u) {
        ctx->pc = 0x193BD8u;
        goto label_193bd8;
    }
    ctx->pc = 0x193BD0u;
    SET_GPR_U32(ctx, 31, 0x193BD8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193BD0u, 0x193BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BD8u;
label_193bd8:
    // 0x193bd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_193bdc:
    // 0x193bdc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x193bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_193be0:
    // 0x193be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193be4:
    // 0x193be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193be8:
    // 0x193be8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x193be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193bec:
    // 0x193bec: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x193becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_193bf0:
    // 0x193bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193bf4:
    // 0x193bf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193bf8:
    // 0x193bf8: 0xc08b9fc  jal         func_22E7F0
label_193bfc:
    if (ctx->pc == 0x193BFCu) {
        ctx->pc = 0x193C00u;
        goto label_193c00;
    }
    ctx->pc = 0x193BF8u;
    SET_GPR_U32(ctx, 31, 0x193C00u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193BF8u, 0x193C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C00u;
label_193c00:
    // 0x193c00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_193c04:
    // 0x193c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193c08:
    // 0x193c08: 0x0  nop
    ctx->pc = 0x193c08u;
    // NOP
label_193c0c:
    // 0x193c0c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x193c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_193c10:
    // 0x193c10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_193c14:
    // 0x193c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193c18:
    // 0x193c18: 0x0  nop
    ctx->pc = 0x193c18u;
    // NOP
label_193c1c:
    // 0x193c1c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x193c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_193c20:
    // 0x193c20: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193c24:
    // 0x193c24: 0xc0552dc  jal         func_154B70
label_193c28:
    if (ctx->pc == 0x193C28u) {
        ctx->pc = 0x193C2Cu;
        goto label_193c2c;
    }
    ctx->pc = 0x193C24u;
    SET_GPR_U32(ctx, 31, 0x193C2Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193C24u, 0x193C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C2Cu;
label_193c2c:
    // 0x193c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193c30:
    // 0x193c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193c34:
    // 0x193c34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x193c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193c38:
    // 0x193c38: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_193c3c:
    // 0x193c3c: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x193c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193c40:
    // 0x193c40: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x193c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_193c44:
    // 0x193c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193c48:
    // 0x193c48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193c4c:
    // 0x193c4c: 0xc08b9fc  jal         func_22E7F0
label_193c50:
    if (ctx->pc == 0x193C50u) {
        ctx->pc = 0x193C54u;
        goto label_193c54;
    }
    ctx->pc = 0x193C4Cu;
    SET_GPR_U32(ctx, 31, 0x193C54u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193C4Cu, 0x193C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C54u;
label_193c54:
    // 0x193c54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_193c58:
    // 0x193c58: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_193c5c:
    if (ctx->pc == 0x193C5Cu) {
        ctx->pc = 0x193C60u;
        goto label_193c60;
    }
    ctx->pc = 0x193C58u;
    {
        const bool branch_taken_0x193c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c58) {
            ctx->pc = 0x193AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193af4;
        }
    }
    ctx->pc = 0x193C60u;
label_193c60:
    // 0x193c60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193c64:
    // 0x193c64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x193c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193c68:
    // 0x193c68: 0xc0406a0  jal         func_101A80
label_193c6c:
    if (ctx->pc == 0x193C6Cu) {
        ctx->pc = 0x193C70u;
        goto label_193c70;
    }
    ctx->pc = 0x193C68u;
    SET_GPR_U32(ctx, 31, 0x193C70u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x193C68u, 0x193C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C70u;
label_193c70:
    // 0x193c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193c74:
    // 0x193c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_193c78:
    // 0x193c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_193c7c:
    // 0x193c7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x193c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_193c80:
    // 0x193c80: 0x3e00008  jr          $ra
label_193c84:
    if (ctx->pc == 0x193C84u) {
        ctx->pc = 0x193C88u;
        goto label_193c88;
    }
    ctx->pc = 0x193C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193C88u;
label_193c88:
    // 0x193c88: 0x0  nop
    ctx->pc = 0x193c88u;
    // NOP
label_193c8c:
    // 0x193c8c: 0x0  nop
    ctx->pc = 0x193c8cu;
    // NOP
    ctx->pc = 0x193c90u;
}
