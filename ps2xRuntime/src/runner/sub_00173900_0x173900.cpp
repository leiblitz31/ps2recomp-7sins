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

// Function: sub_00173900
// Address: 0x173900 - 0x173c40
void sub_00173900_0x173900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173900_0x173900");
#endif

    switch (ctx->pc) {
        case 0x173900u: goto label_173900;
        case 0x173904u: goto label_173904;
        case 0x173908u: goto label_173908;
        case 0x17390cu: goto label_17390c;
        case 0x173910u: goto label_173910;
        case 0x173914u: goto label_173914;
        case 0x173918u: goto label_173918;
        case 0x17391cu: goto label_17391c;
        case 0x173920u: goto label_173920;
        case 0x173924u: goto label_173924;
        case 0x173928u: goto label_173928;
        case 0x17392cu: goto label_17392c;
        case 0x173930u: goto label_173930;
        case 0x173934u: goto label_173934;
        case 0x173938u: goto label_173938;
        case 0x17393cu: goto label_17393c;
        case 0x173940u: goto label_173940;
        case 0x173944u: goto label_173944;
        case 0x173948u: goto label_173948;
        case 0x17394cu: goto label_17394c;
        case 0x173950u: goto label_173950;
        case 0x173954u: goto label_173954;
        case 0x173958u: goto label_173958;
        case 0x17395cu: goto label_17395c;
        case 0x173960u: goto label_173960;
        case 0x173964u: goto label_173964;
        case 0x173968u: goto label_173968;
        case 0x17396cu: goto label_17396c;
        case 0x173970u: goto label_173970;
        case 0x173974u: goto label_173974;
        case 0x173978u: goto label_173978;
        case 0x17397cu: goto label_17397c;
        case 0x173980u: goto label_173980;
        case 0x173984u: goto label_173984;
        case 0x173988u: goto label_173988;
        case 0x17398cu: goto label_17398c;
        case 0x173990u: goto label_173990;
        case 0x173994u: goto label_173994;
        case 0x173998u: goto label_173998;
        case 0x17399cu: goto label_17399c;
        case 0x1739a0u: goto label_1739a0;
        case 0x1739a4u: goto label_1739a4;
        case 0x1739a8u: goto label_1739a8;
        case 0x1739acu: goto label_1739ac;
        case 0x1739b0u: goto label_1739b0;
        case 0x1739b4u: goto label_1739b4;
        case 0x1739b8u: goto label_1739b8;
        case 0x1739bcu: goto label_1739bc;
        case 0x1739c0u: goto label_1739c0;
        case 0x1739c4u: goto label_1739c4;
        case 0x1739c8u: goto label_1739c8;
        case 0x1739ccu: goto label_1739cc;
        case 0x1739d0u: goto label_1739d0;
        case 0x1739d4u: goto label_1739d4;
        case 0x1739d8u: goto label_1739d8;
        case 0x1739dcu: goto label_1739dc;
        case 0x1739e0u: goto label_1739e0;
        case 0x1739e4u: goto label_1739e4;
        case 0x1739e8u: goto label_1739e8;
        case 0x1739ecu: goto label_1739ec;
        case 0x1739f0u: goto label_1739f0;
        case 0x1739f4u: goto label_1739f4;
        case 0x1739f8u: goto label_1739f8;
        case 0x1739fcu: goto label_1739fc;
        case 0x173a00u: goto label_173a00;
        case 0x173a04u: goto label_173a04;
        case 0x173a08u: goto label_173a08;
        case 0x173a0cu: goto label_173a0c;
        case 0x173a10u: goto label_173a10;
        case 0x173a14u: goto label_173a14;
        case 0x173a18u: goto label_173a18;
        case 0x173a1cu: goto label_173a1c;
        case 0x173a20u: goto label_173a20;
        case 0x173a24u: goto label_173a24;
        case 0x173a28u: goto label_173a28;
        case 0x173a2cu: goto label_173a2c;
        case 0x173a30u: goto label_173a30;
        case 0x173a34u: goto label_173a34;
        case 0x173a38u: goto label_173a38;
        case 0x173a3cu: goto label_173a3c;
        case 0x173a40u: goto label_173a40;
        case 0x173a44u: goto label_173a44;
        case 0x173a48u: goto label_173a48;
        case 0x173a4cu: goto label_173a4c;
        case 0x173a50u: goto label_173a50;
        case 0x173a54u: goto label_173a54;
        case 0x173a58u: goto label_173a58;
        case 0x173a5cu: goto label_173a5c;
        case 0x173a60u: goto label_173a60;
        case 0x173a64u: goto label_173a64;
        case 0x173a68u: goto label_173a68;
        case 0x173a6cu: goto label_173a6c;
        case 0x173a70u: goto label_173a70;
        case 0x173a74u: goto label_173a74;
        case 0x173a78u: goto label_173a78;
        case 0x173a7cu: goto label_173a7c;
        case 0x173a80u: goto label_173a80;
        case 0x173a84u: goto label_173a84;
        case 0x173a88u: goto label_173a88;
        case 0x173a8cu: goto label_173a8c;
        case 0x173a90u: goto label_173a90;
        case 0x173a94u: goto label_173a94;
        case 0x173a98u: goto label_173a98;
        case 0x173a9cu: goto label_173a9c;
        case 0x173aa0u: goto label_173aa0;
        case 0x173aa4u: goto label_173aa4;
        case 0x173aa8u: goto label_173aa8;
        case 0x173aacu: goto label_173aac;
        case 0x173ab0u: goto label_173ab0;
        case 0x173ab4u: goto label_173ab4;
        case 0x173ab8u: goto label_173ab8;
        case 0x173abcu: goto label_173abc;
        case 0x173ac0u: goto label_173ac0;
        case 0x173ac4u: goto label_173ac4;
        case 0x173ac8u: goto label_173ac8;
        case 0x173accu: goto label_173acc;
        case 0x173ad0u: goto label_173ad0;
        case 0x173ad4u: goto label_173ad4;
        case 0x173ad8u: goto label_173ad8;
        case 0x173adcu: goto label_173adc;
        case 0x173ae0u: goto label_173ae0;
        case 0x173ae4u: goto label_173ae4;
        case 0x173ae8u: goto label_173ae8;
        case 0x173aecu: goto label_173aec;
        case 0x173af0u: goto label_173af0;
        case 0x173af4u: goto label_173af4;
        case 0x173af8u: goto label_173af8;
        case 0x173afcu: goto label_173afc;
        case 0x173b00u: goto label_173b00;
        case 0x173b04u: goto label_173b04;
        case 0x173b08u: goto label_173b08;
        case 0x173b0cu: goto label_173b0c;
        case 0x173b10u: goto label_173b10;
        case 0x173b14u: goto label_173b14;
        case 0x173b18u: goto label_173b18;
        case 0x173b1cu: goto label_173b1c;
        case 0x173b20u: goto label_173b20;
        case 0x173b24u: goto label_173b24;
        case 0x173b28u: goto label_173b28;
        case 0x173b2cu: goto label_173b2c;
        case 0x173b30u: goto label_173b30;
        case 0x173b34u: goto label_173b34;
        case 0x173b38u: goto label_173b38;
        case 0x173b3cu: goto label_173b3c;
        case 0x173b40u: goto label_173b40;
        case 0x173b44u: goto label_173b44;
        case 0x173b48u: goto label_173b48;
        case 0x173b4cu: goto label_173b4c;
        case 0x173b50u: goto label_173b50;
        case 0x173b54u: goto label_173b54;
        case 0x173b58u: goto label_173b58;
        case 0x173b5cu: goto label_173b5c;
        case 0x173b60u: goto label_173b60;
        case 0x173b64u: goto label_173b64;
        case 0x173b68u: goto label_173b68;
        case 0x173b6cu: goto label_173b6c;
        case 0x173b70u: goto label_173b70;
        case 0x173b74u: goto label_173b74;
        case 0x173b78u: goto label_173b78;
        case 0x173b7cu: goto label_173b7c;
        case 0x173b80u: goto label_173b80;
        case 0x173b84u: goto label_173b84;
        case 0x173b88u: goto label_173b88;
        case 0x173b8cu: goto label_173b8c;
        case 0x173b90u: goto label_173b90;
        case 0x173b94u: goto label_173b94;
        case 0x173b98u: goto label_173b98;
        case 0x173b9cu: goto label_173b9c;
        case 0x173ba0u: goto label_173ba0;
        case 0x173ba4u: goto label_173ba4;
        case 0x173ba8u: goto label_173ba8;
        case 0x173bacu: goto label_173bac;
        case 0x173bb0u: goto label_173bb0;
        case 0x173bb4u: goto label_173bb4;
        case 0x173bb8u: goto label_173bb8;
        case 0x173bbcu: goto label_173bbc;
        case 0x173bc0u: goto label_173bc0;
        case 0x173bc4u: goto label_173bc4;
        case 0x173bc8u: goto label_173bc8;
        case 0x173bccu: goto label_173bcc;
        case 0x173bd0u: goto label_173bd0;
        case 0x173bd4u: goto label_173bd4;
        case 0x173bd8u: goto label_173bd8;
        case 0x173bdcu: goto label_173bdc;
        case 0x173be0u: goto label_173be0;
        case 0x173be4u: goto label_173be4;
        case 0x173be8u: goto label_173be8;
        case 0x173becu: goto label_173bec;
        case 0x173bf0u: goto label_173bf0;
        case 0x173bf4u: goto label_173bf4;
        case 0x173bf8u: goto label_173bf8;
        case 0x173bfcu: goto label_173bfc;
        case 0x173c00u: goto label_173c00;
        case 0x173c04u: goto label_173c04;
        case 0x173c08u: goto label_173c08;
        case 0x173c0cu: goto label_173c0c;
        case 0x173c10u: goto label_173c10;
        case 0x173c14u: goto label_173c14;
        case 0x173c18u: goto label_173c18;
        case 0x173c1cu: goto label_173c1c;
        case 0x173c20u: goto label_173c20;
        case 0x173c24u: goto label_173c24;
        case 0x173c28u: goto label_173c28;
        case 0x173c2cu: goto label_173c2c;
        case 0x173c30u: goto label_173c30;
        case 0x173c34u: goto label_173c34;
        case 0x173c38u: goto label_173c38;
        case 0x173c3cu: goto label_173c3c;
        default: break;
    }

    ctx->pc = 0x173900u;

label_173900:
    // 0x173900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173904:
    // 0x173904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_173908:
    // 0x173908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x173908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17390c:
    // 0x17390c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173910:
    // 0x173910: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_173914:
    // 0x173914: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_173918:
    if (ctx->pc == 0x173918u) {
        ctx->pc = 0x17391Cu;
        goto label_17391c;
    }
    ctx->pc = 0x173914u;
    {
        const bool branch_taken_0x173914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173914) {
            ctx->pc = 0x173938u;
            goto label_173938;
        }
    }
    ctx->pc = 0x17391Cu;
label_17391c:
    // 0x17391c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173920:
    // 0x173920: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_173924:
    // 0x173924: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x173924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_173928:
    // 0x173928: 0xc085538  jal         func_2154E0
label_17392c:
    if (ctx->pc == 0x17392Cu) {
        ctx->pc = 0x173930u;
        goto label_173930;
    }
    ctx->pc = 0x173928u;
    SET_GPR_U32(ctx, 31, 0x173930u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x173928u, 0x173930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173930u;
label_173930:
    // 0x173930: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x173930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173934:
    // 0x173934: 0xac62012c  sw          $v0, 0x12C($v1)
    ctx->pc = 0x173934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 2));
label_173938:
    // 0x173938: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x173938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17393c:
    // 0x17393c: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_173940:
    // 0x173940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173944:
    // 0x173944: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_173948:
    // 0x173948: 0x3e00008  jr          $ra
label_17394c:
    if (ctx->pc == 0x17394Cu) {
        ctx->pc = 0x173950u;
        goto label_173950;
    }
    ctx->pc = 0x173948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173950u;
label_173950:
    // 0x173950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_173954:
    // 0x173954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_173958:
    // 0x173958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17395c:
    // 0x17395c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_173960:
    // 0x173960: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x173960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_173964:
    // 0x173964: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x173964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_173968:
    // 0x173968: 0xc055b3c  jal         func_156CF0
label_17396c:
    if (ctx->pc == 0x17396Cu) {
        ctx->pc = 0x173970u;
        goto label_173970;
    }
    ctx->pc = 0x173968u;
    SET_GPR_U32(ctx, 31, 0x173970u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x173968u, 0x173970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173970u;
label_173970:
    // 0x173970: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_173974:
    // 0x173974: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x173974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_173978:
    // 0x173978: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_17397c:
    if (ctx->pc == 0x17397Cu) {
        ctx->pc = 0x173980u;
        goto label_173980;
    }
    ctx->pc = 0x173978u;
    {
        const bool branch_taken_0x173978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173978) {
            ctx->pc = 0x173998u;
            goto label_173998;
        }
    }
    ctx->pc = 0x173980u;
label_173980:
    // 0x173980: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_173984:
    // 0x173984: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x173984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_173988:
    // 0x173988: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_17398c:
    // 0x17398c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x17398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_173990:
    // 0x173990: 0xc084440  jal         func_211100
label_173994:
    if (ctx->pc == 0x173994u) {
        ctx->pc = 0x173998u;
        goto label_173998;
    }
    ctx->pc = 0x173990u;
    SET_GPR_U32(ctx, 31, 0x173998u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x173990u, 0x173998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173998u;
label_173998:
    // 0x173998: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_17399c:
    // 0x17399c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x17399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_1739a0:
    // 0x1739a0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_1739a4:
    if (ctx->pc == 0x1739A4u) {
        ctx->pc = 0x1739A8u;
        goto label_1739a8;
    }
    ctx->pc = 0x1739A0u;
    {
        const bool branch_taken_0x1739a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1739a0) {
            ctx->pc = 0x173A88u;
            goto label_173a88;
        }
    }
    ctx->pc = 0x1739A8u;
label_1739a8:
    // 0x1739a8: 0xc05548c  jal         func_155230
label_1739ac:
    if (ctx->pc == 0x1739ACu) {
        ctx->pc = 0x1739B0u;
        goto label_1739b0;
    }
    ctx->pc = 0x1739A8u;
    SET_GPR_U32(ctx, 31, 0x1739B0u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1739A8u, 0x1739B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739B0u;
label_1739b0:
    // 0x1739b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1739b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1739b4:
    // 0x1739b4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1739b8:
    // 0x1739b8: 0xc0553d4  jal         func_154F50
label_1739bc:
    if (ctx->pc == 0x1739BCu) {
        ctx->pc = 0x1739C0u;
        goto label_1739c0;
    }
    ctx->pc = 0x1739B8u;
    SET_GPR_U32(ctx, 31, 0x1739C0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1739B8u, 0x1739C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739C0u;
label_1739c0:
    // 0x1739c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1739c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1739c4:
    // 0x1739c4: 0x10100030  beq         $zero, $s0, . + 4 + (0x30 << 2)
label_1739c8:
    if (ctx->pc == 0x1739C8u) {
        ctx->pc = 0x1739CCu;
        goto label_1739cc;
    }
    ctx->pc = 0x1739C4u;
    {
        const bool branch_taken_0x1739c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1739c4) {
            ctx->pc = 0x173A88u;
            goto label_173a88;
        }
    }
    ctx->pc = 0x1739CCu;
label_1739cc:
    // 0x1739cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1739ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1739d0:
    // 0x1739d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1739d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1739d4:
    // 0x1739d4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1739d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1739d8:
    // 0x1739d8: 0x320f809  jalr        $t9
label_1739dc:
    if (ctx->pc == 0x1739DCu) {
        ctx->pc = 0x1739E0u;
        goto label_1739e0;
    }
    ctx->pc = 0x1739D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1739E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1739D8u, 0x1739E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1739E0u;
label_1739e0:
    // 0x1739e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1739e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1739e4:
    // 0x1739e4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1739e8:
    if (ctx->pc == 0x1739E8u) {
        ctx->pc = 0x1739ECu;
        goto label_1739ec;
    }
    ctx->pc = 0x1739E4u;
    {
        const bool branch_taken_0x1739e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1739e4) {
            ctx->pc = 0x173A88u;
            goto label_173a88;
        }
    }
    ctx->pc = 0x1739ECu;
label_1739ec:
    // 0x1739ec: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1739ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1739f0:
    // 0x1739f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1739f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1739f4:
    // 0x1739f4: 0x24a54818  addiu       $a1, $a1, 0x4818
    ctx->pc = 0x1739f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18456));
label_1739f8:
    // 0x1739f8: 0xc08e57c  jal         func_2395F0
label_1739fc:
    if (ctx->pc == 0x1739FCu) {
        ctx->pc = 0x173A00u;
        goto label_173a00;
    }
    ctx->pc = 0x1739F8u;
    SET_GPR_U32(ctx, 31, 0x173A00u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1739F8u, 0x173A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A00u;
label_173a00:
    // 0x173a00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_173a04:
    // 0x173a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173a08:
    // 0x173a08: 0xc0406d0  jal         func_101B40
label_173a0c:
    if (ctx->pc == 0x173A0Cu) {
        ctx->pc = 0x173A10u;
        goto label_173a10;
    }
    ctx->pc = 0x173A08u;
    SET_GPR_U32(ctx, 31, 0x173A10u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173A08u, 0x173A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A10u;
label_173a10:
    // 0x173a10: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x173a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_173a14:
    // 0x173a14: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173a18:
    // 0x173a18: 0x24a54828  addiu       $a1, $a1, 0x4828
    ctx->pc = 0x173a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18472));
label_173a1c:
    // 0x173a1c: 0xc08e57c  jal         func_2395F0
label_173a20:
    if (ctx->pc == 0x173A20u) {
        ctx->pc = 0x173A24u;
        goto label_173a24;
    }
    ctx->pc = 0x173A1Cu;
    SET_GPR_U32(ctx, 31, 0x173A24u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173A1Cu, 0x173A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A24u;
label_173a24:
    // 0x173a24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173a28:
    // 0x173a28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173a2c:
    // 0x173a2c: 0xc0406d0  jal         func_101B40
label_173a30:
    if (ctx->pc == 0x173A30u) {
        ctx->pc = 0x173A34u;
        goto label_173a34;
    }
    ctx->pc = 0x173A2Cu;
    SET_GPR_U32(ctx, 31, 0x173A34u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173A2Cu, 0x173A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A34u;
label_173a34:
    // 0x173a34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x173a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_173a38:
    // 0x173a38: 0x34510302  ori         $s1, $v0, 0x302
    ctx->pc = 0x173a38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)770);
label_173a3c:
    // 0x173a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173a40:
    // 0x173a40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x173a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_173a44:
    // 0x173a44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x173a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173a48:
    // 0x173a48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x173a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173a4c:
    // 0x173a4c: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x173a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
label_173a50:
    // 0x173a50: 0x250841a0  addiu       $t0, $t0, 0x41A0
    ctx->pc = 0x173a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16800));
label_173a54:
    // 0x173a54: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x173a54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_173a58:
    // 0x173a58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173a5c:
    // 0x173a5c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x173a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_173a60:
    // 0x173a60: 0x320f809  jalr        $t9
label_173a64:
    if (ctx->pc == 0x173A64u) {
        ctx->pc = 0x173A68u;
        goto label_173a68;
    }
    ctx->pc = 0x173A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A60u, 0x173A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173A68u;
label_173a68:
    // 0x173a68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173a6c:
    // 0x173a6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173a70:
    // 0x173a70: 0xc0406a0  jal         func_101A80
label_173a74:
    if (ctx->pc == 0x173A74u) {
        ctx->pc = 0x173A78u;
        goto label_173a78;
    }
    ctx->pc = 0x173A70u;
    SET_GPR_U32(ctx, 31, 0x173A78u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173A70u, 0x173A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A78u;
label_173a78:
    // 0x173a78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_173a7c:
    // 0x173a7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173a80:
    // 0x173a80: 0xc0406a0  jal         func_101A80
label_173a84:
    if (ctx->pc == 0x173A84u) {
        ctx->pc = 0x173A88u;
        goto label_173a88;
    }
    ctx->pc = 0x173A80u;
    SET_GPR_U32(ctx, 31, 0x173A88u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173A80u, 0x173A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A88u;
label_173a88:
    // 0x173a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173a8c:
    // 0x173a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173a90:
    // 0x173a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_173a94:
    // 0x173a94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x173a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_173a98:
    // 0x173a98: 0x3e00008  jr          $ra
label_173a9c:
    if (ctx->pc == 0x173A9Cu) {
        ctx->pc = 0x173AA0u;
        goto label_173aa0;
    }
    ctx->pc = 0x173A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173AA0u;
label_173aa0:
    // 0x173aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173aa4:
    // 0x173aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_173aa8:
    // 0x173aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x173aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_173aac:
    // 0x173aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x173aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173ab0:
    // 0x173ab0: 0xc055a84  jal         func_156A10
label_173ab4:
    if (ctx->pc == 0x173AB4u) {
        ctx->pc = 0x173AB8u;
        goto label_173ab8;
    }
    ctx->pc = 0x173AB0u;
    SET_GPR_U32(ctx, 31, 0x173AB8u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x173AB0u, 0x173AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AB8u;
label_173ab8:
    // 0x173ab8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x173ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173abc:
    // 0x173abc: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x173abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_173ac0:
    // 0x173ac0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_173ac4:
    if (ctx->pc == 0x173AC4u) {
        ctx->pc = 0x173AC8u;
        goto label_173ac8;
    }
    ctx->pc = 0x173AC0u;
    {
        const bool branch_taken_0x173ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ac0) {
            ctx->pc = 0x173AE0u;
            goto label_173ae0;
        }
    }
    ctx->pc = 0x173AC8u;
label_173ac8:
    // 0x173ac8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173acc:
    // 0x173acc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x173accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_173ad0:
    // 0x173ad0: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_173ad4:
    // 0x173ad4: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x173ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_173ad8:
    // 0x173ad8: 0xc0844d0  jal         func_211340
label_173adc:
    if (ctx->pc == 0x173ADCu) {
        ctx->pc = 0x173AE0u;
        goto label_173ae0;
    }
    ctx->pc = 0x173AD8u;
    SET_GPR_U32(ctx, 31, 0x173AE0u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x173AD8u, 0x173AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AE0u;
label_173ae0:
    // 0x173ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173ae4:
    // 0x173ae4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_173ae8:
    // 0x173ae8: 0x3e00008  jr          $ra
label_173aec:
    if (ctx->pc == 0x173AECu) {
        ctx->pc = 0x173AF0u;
        goto label_173af0;
    }
    ctx->pc = 0x173AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173AF0u;
label_173af0:
    // 0x173af0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x173af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_173af4:
    // 0x173af4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x173af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_173af8:
    // 0x173af8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x173af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_173afc:
    // 0x173afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_173b00:
    // 0x173b00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_173b04:
    // 0x173b04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_173b08:
    // 0x173b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_173b0c:
    // 0x173b0c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x173b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_173b10:
    // 0x173b10: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x173b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_173b14:
    // 0x173b14: 0xa3a60090  sb          $a2, 0x90($sp)
    ctx->pc = 0x173b14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 6));
label_173b18:
    // 0x173b18: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_173b1c:
    // 0x173b1c: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x173b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_173b20:
    // 0x173b20: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
label_173b24:
    if (ctx->pc == 0x173B24u) {
        ctx->pc = 0x173B28u;
        goto label_173b28;
    }
    ctx->pc = 0x173B20u;
    {
        const bool branch_taken_0x173b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173b20) {
            ctx->pc = 0x173C10u;
            goto label_173c10;
        }
    }
    ctx->pc = 0x173B28u;
label_173b28:
    // 0x173b28: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x173b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_173b2c:
    // 0x173b2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x173b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_173b30:
    // 0x173b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173b34:
    // 0x173b34: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
label_173b38:
    if (ctx->pc == 0x173B38u) {
        ctx->pc = 0x173B3Cu;
        goto label_173b3c;
    }
    ctx->pc = 0x173B34u;
    {
        const bool branch_taken_0x173b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x173b34) {
            ctx->pc = 0x173C10u;
            goto label_173c10;
        }
    }
    ctx->pc = 0x173B3Cu;
label_173b3c:
    // 0x173b3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173b40:
    // 0x173b40: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x173b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_173b44:
    // 0x173b44: 0xc047eb8  jal         func_11FAE0
label_173b48:
    if (ctx->pc == 0x173B48u) {
        ctx->pc = 0x173B4Cu;
        goto label_173b4c;
    }
    ctx->pc = 0x173B44u;
    SET_GPR_U32(ctx, 31, 0x173B4Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x173B44u, 0x173B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B4Cu;
label_173b4c:
    // 0x173b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173b50:
    // 0x173b50: 0xc047eb0  jal         func_11FAC0
label_173b54:
    if (ctx->pc == 0x173B54u) {
        ctx->pc = 0x173B58u;
        goto label_173b58;
    }
    ctx->pc = 0x173B50u;
    SET_GPR_U32(ctx, 31, 0x173B58u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x173B50u, 0x173B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B58u;
label_173b58:
    // 0x173b58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x173b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173b5c:
    // 0x173b5c: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x173b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_173b60:
    // 0x173b60: 0x16800019  bnez        $s4, . + 4 + (0x19 << 2)
label_173b64:
    if (ctx->pc == 0x173B64u) {
        ctx->pc = 0x173B68u;
        goto label_173b68;
    }
    ctx->pc = 0x173B60u;
    {
        const bool branch_taken_0x173b60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x173b60) {
            ctx->pc = 0x173BC8u;
            goto label_173bc8;
        }
    }
    ctx->pc = 0x173B68u;
label_173b68:
    // 0x173b68: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x173b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_173b6c:
    // 0x173b6c: 0xc047eb8  jal         func_11FAE0
label_173b70:
    if (ctx->pc == 0x173B70u) {
        ctx->pc = 0x173B74u;
        goto label_173b74;
    }
    ctx->pc = 0x173B6Cu;
    SET_GPR_U32(ctx, 31, 0x173B74u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x173B6Cu, 0x173B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B74u;
label_173b74:
    // 0x173b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173b78:
    // 0x173b78: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x173b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
label_173b7c:
    // 0x173b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173b80:
    // 0x173b80: 0xc040ab0  jal         func_102AC0
label_173b84:
    if (ctx->pc == 0x173B84u) {
        ctx->pc = 0x173B88u;
        goto label_173b88;
    }
    ctx->pc = 0x173B80u;
    SET_GPR_U32(ctx, 31, 0x173B88u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x173B80u, 0x173B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B88u;
label_173b88:
    // 0x173b88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x173b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173b8c:
    // 0x173b8c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x173b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_173b90:
    // 0x173b90: 0xc047eb8  jal         func_11FAE0
label_173b94:
    if (ctx->pc == 0x173B94u) {
        ctx->pc = 0x173B98u;
        goto label_173b98;
    }
    ctx->pc = 0x173B90u;
    SET_GPR_U32(ctx, 31, 0x173B98u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x173B90u, 0x173B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B98u;
label_173b98:
    // 0x173b98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173b9c:
    // 0x173b9c: 0x24050572  addiu       $a1, $zero, 0x572
    ctx->pc = 0x173b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1394));
label_173ba0:
    // 0x173ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173ba4:
    // 0x173ba4: 0xc040ab0  jal         func_102AC0
label_173ba8:
    if (ctx->pc == 0x173BA8u) {
        ctx->pc = 0x173BACu;
        goto label_173bac;
    }
    ctx->pc = 0x173BA4u;
    SET_GPR_U32(ctx, 31, 0x173BACu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x173BA4u, 0x173BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BACu;
label_173bac:
    // 0x173bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173bb0:
    // 0x173bb0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_173bb4:
    if (ctx->pc == 0x173BB4u) {
        ctx->pc = 0x173BB8u;
        goto label_173bb8;
    }
    ctx->pc = 0x173BB0u;
    {
        const bool branch_taken_0x173bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173bb0) {
            ctx->pc = 0x173BC8u;
            goto label_173bc8;
        }
    }
    ctx->pc = 0x173BB8u;
label_173bb8:
    // 0x173bb8: 0x16130003  bne         $s0, $s3, . + 4 + (0x3 << 2)
label_173bbc:
    if (ctx->pc == 0x173BBCu) {
        ctx->pc = 0x173BC0u;
        goto label_173bc0;
    }
    ctx->pc = 0x173BB8u;
    {
        const bool branch_taken_0x173bb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x173bb8) {
            ctx->pc = 0x173BC8u;
            goto label_173bc8;
        }
    }
    ctx->pc = 0x173BC0u;
label_173bc0:
    // 0x173bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173bc4:
    // 0x173bc4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x173bc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_173bc8:
    // 0x173bc8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x173bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_173bcc:
    // 0x173bcc: 0xc047eb8  jal         func_11FAE0
label_173bd0:
    if (ctx->pc == 0x173BD0u) {
        ctx->pc = 0x173BD4u;
        goto label_173bd4;
    }
    ctx->pc = 0x173BCCu;
    SET_GPR_U32(ctx, 31, 0x173BD4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x173BCCu, 0x173BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BD4u;
label_173bd4:
    // 0x173bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173bd8:
    // 0x173bd8: 0xc08d5d8  jal         func_235760
label_173bdc:
    if (ctx->pc == 0x173BDCu) {
        ctx->pc = 0x173BE0u;
        goto label_173be0;
    }
    ctx->pc = 0x173BD8u;
    SET_GPR_U32(ctx, 31, 0x173BE0u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x173BD8u, 0x173BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BE0u;
label_173be0:
    // 0x173be0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x173be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_173be4:
    // 0x173be4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_173be8:
    // 0x173be8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173bec:
    // 0x173bec: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x173becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173bf0:
    // 0x173bf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x173bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173bf4:
    // 0x173bf4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_173bf8:
    if (ctx->pc == 0x173BF8u) {
        ctx->pc = 0x173BFCu;
        goto label_173bfc;
    }
    ctx->pc = 0x173BF4u;
    {
        const bool branch_taken_0x173bf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173bf4) {
            ctx->pc = 0x173C04u;
            goto label_173c04;
        }
    }
    ctx->pc = 0x173BFCu;
label_173bfc:
    // 0x173bfc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_173c00:
    if (ctx->pc == 0x173C00u) {
        ctx->pc = 0x173C04u;
        goto label_173c04;
    }
    ctx->pc = 0x173BFCu;
    {
        const bool branch_taken_0x173bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x173bfc) {
            ctx->pc = 0x173C10u;
            goto label_173c10;
        }
    }
    ctx->pc = 0x173C04u;
label_173c04:
    // 0x173c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173c08:
    // 0x173c08: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x173c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_173c0c:
    // 0x173c0c: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x173c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
label_173c10:
    // 0x173c10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x173c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_173c14:
    // 0x173c14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x173c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173c18:
    // 0x173c18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x173c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173c1c:
    // 0x173c1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173c20:
    // 0x173c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173c24:
    // 0x173c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_173c28:
    // 0x173c28: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x173c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_173c2c:
    // 0x173c2c: 0x3e00008  jr          $ra
label_173c30:
    if (ctx->pc == 0x173C30u) {
        ctx->pc = 0x173C34u;
        goto label_173c34;
    }
    ctx->pc = 0x173C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173C34u;
label_173c34:
    // 0x173c34: 0x0  nop
    ctx->pc = 0x173c34u;
    // NOP
label_173c38:
    // 0x173c38: 0x0  nop
    ctx->pc = 0x173c38u;
    // NOP
label_173c3c:
    // 0x173c3c: 0x0  nop
    ctx->pc = 0x173c3cu;
    // NOP
    ctx->pc = 0x173c40u;
}
