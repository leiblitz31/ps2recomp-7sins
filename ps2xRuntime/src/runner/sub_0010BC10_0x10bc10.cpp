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

// Function: sub_0010BC10
// Address: 0x10bc10 - 0x10bf10
void sub_0010BC10_0x10bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BC10_0x10bc10");
#endif

    switch (ctx->pc) {
        case 0x10bc10u: goto label_10bc10;
        case 0x10bc14u: goto label_10bc14;
        case 0x10bc18u: goto label_10bc18;
        case 0x10bc1cu: goto label_10bc1c;
        case 0x10bc20u: goto label_10bc20;
        case 0x10bc24u: goto label_10bc24;
        case 0x10bc28u: goto label_10bc28;
        case 0x10bc2cu: goto label_10bc2c;
        case 0x10bc30u: goto label_10bc30;
        case 0x10bc34u: goto label_10bc34;
        case 0x10bc38u: goto label_10bc38;
        case 0x10bc3cu: goto label_10bc3c;
        case 0x10bc40u: goto label_10bc40;
        case 0x10bc44u: goto label_10bc44;
        case 0x10bc48u: goto label_10bc48;
        case 0x10bc4cu: goto label_10bc4c;
        case 0x10bc50u: goto label_10bc50;
        case 0x10bc54u: goto label_10bc54;
        case 0x10bc58u: goto label_10bc58;
        case 0x10bc5cu: goto label_10bc5c;
        case 0x10bc60u: goto label_10bc60;
        case 0x10bc64u: goto label_10bc64;
        case 0x10bc68u: goto label_10bc68;
        case 0x10bc6cu: goto label_10bc6c;
        case 0x10bc70u: goto label_10bc70;
        case 0x10bc74u: goto label_10bc74;
        case 0x10bc78u: goto label_10bc78;
        case 0x10bc7cu: goto label_10bc7c;
        case 0x10bc80u: goto label_10bc80;
        case 0x10bc84u: goto label_10bc84;
        case 0x10bc88u: goto label_10bc88;
        case 0x10bc8cu: goto label_10bc8c;
        case 0x10bc90u: goto label_10bc90;
        case 0x10bc94u: goto label_10bc94;
        case 0x10bc98u: goto label_10bc98;
        case 0x10bc9cu: goto label_10bc9c;
        case 0x10bca0u: goto label_10bca0;
        case 0x10bca4u: goto label_10bca4;
        case 0x10bca8u: goto label_10bca8;
        case 0x10bcacu: goto label_10bcac;
        case 0x10bcb0u: goto label_10bcb0;
        case 0x10bcb4u: goto label_10bcb4;
        case 0x10bcb8u: goto label_10bcb8;
        case 0x10bcbcu: goto label_10bcbc;
        case 0x10bcc0u: goto label_10bcc0;
        case 0x10bcc4u: goto label_10bcc4;
        case 0x10bcc8u: goto label_10bcc8;
        case 0x10bcccu: goto label_10bccc;
        case 0x10bcd0u: goto label_10bcd0;
        case 0x10bcd4u: goto label_10bcd4;
        case 0x10bcd8u: goto label_10bcd8;
        case 0x10bcdcu: goto label_10bcdc;
        case 0x10bce0u: goto label_10bce0;
        case 0x10bce4u: goto label_10bce4;
        case 0x10bce8u: goto label_10bce8;
        case 0x10bcecu: goto label_10bcec;
        case 0x10bcf0u: goto label_10bcf0;
        case 0x10bcf4u: goto label_10bcf4;
        case 0x10bcf8u: goto label_10bcf8;
        case 0x10bcfcu: goto label_10bcfc;
        case 0x10bd00u: goto label_10bd00;
        case 0x10bd04u: goto label_10bd04;
        case 0x10bd08u: goto label_10bd08;
        case 0x10bd0cu: goto label_10bd0c;
        case 0x10bd10u: goto label_10bd10;
        case 0x10bd14u: goto label_10bd14;
        case 0x10bd18u: goto label_10bd18;
        case 0x10bd1cu: goto label_10bd1c;
        case 0x10bd20u: goto label_10bd20;
        case 0x10bd24u: goto label_10bd24;
        case 0x10bd28u: goto label_10bd28;
        case 0x10bd2cu: goto label_10bd2c;
        case 0x10bd30u: goto label_10bd30;
        case 0x10bd34u: goto label_10bd34;
        case 0x10bd38u: goto label_10bd38;
        case 0x10bd3cu: goto label_10bd3c;
        case 0x10bd40u: goto label_10bd40;
        case 0x10bd44u: goto label_10bd44;
        case 0x10bd48u: goto label_10bd48;
        case 0x10bd4cu: goto label_10bd4c;
        case 0x10bd50u: goto label_10bd50;
        case 0x10bd54u: goto label_10bd54;
        case 0x10bd58u: goto label_10bd58;
        case 0x10bd5cu: goto label_10bd5c;
        case 0x10bd60u: goto label_10bd60;
        case 0x10bd64u: goto label_10bd64;
        case 0x10bd68u: goto label_10bd68;
        case 0x10bd6cu: goto label_10bd6c;
        case 0x10bd70u: goto label_10bd70;
        case 0x10bd74u: goto label_10bd74;
        case 0x10bd78u: goto label_10bd78;
        case 0x10bd7cu: goto label_10bd7c;
        case 0x10bd80u: goto label_10bd80;
        case 0x10bd84u: goto label_10bd84;
        case 0x10bd88u: goto label_10bd88;
        case 0x10bd8cu: goto label_10bd8c;
        case 0x10bd90u: goto label_10bd90;
        case 0x10bd94u: goto label_10bd94;
        case 0x10bd98u: goto label_10bd98;
        case 0x10bd9cu: goto label_10bd9c;
        case 0x10bda0u: goto label_10bda0;
        case 0x10bda4u: goto label_10bda4;
        case 0x10bda8u: goto label_10bda8;
        case 0x10bdacu: goto label_10bdac;
        case 0x10bdb0u: goto label_10bdb0;
        case 0x10bdb4u: goto label_10bdb4;
        case 0x10bdb8u: goto label_10bdb8;
        case 0x10bdbcu: goto label_10bdbc;
        case 0x10bdc0u: goto label_10bdc0;
        case 0x10bdc4u: goto label_10bdc4;
        case 0x10bdc8u: goto label_10bdc8;
        case 0x10bdccu: goto label_10bdcc;
        case 0x10bdd0u: goto label_10bdd0;
        case 0x10bdd4u: goto label_10bdd4;
        case 0x10bdd8u: goto label_10bdd8;
        case 0x10bddcu: goto label_10bddc;
        case 0x10bde0u: goto label_10bde0;
        case 0x10bde4u: goto label_10bde4;
        case 0x10bde8u: goto label_10bde8;
        case 0x10bdecu: goto label_10bdec;
        case 0x10bdf0u: goto label_10bdf0;
        case 0x10bdf4u: goto label_10bdf4;
        case 0x10bdf8u: goto label_10bdf8;
        case 0x10bdfcu: goto label_10bdfc;
        case 0x10be00u: goto label_10be00;
        case 0x10be04u: goto label_10be04;
        case 0x10be08u: goto label_10be08;
        case 0x10be0cu: goto label_10be0c;
        case 0x10be10u: goto label_10be10;
        case 0x10be14u: goto label_10be14;
        case 0x10be18u: goto label_10be18;
        case 0x10be1cu: goto label_10be1c;
        case 0x10be20u: goto label_10be20;
        case 0x10be24u: goto label_10be24;
        case 0x10be28u: goto label_10be28;
        case 0x10be2cu: goto label_10be2c;
        case 0x10be30u: goto label_10be30;
        case 0x10be34u: goto label_10be34;
        case 0x10be38u: goto label_10be38;
        case 0x10be3cu: goto label_10be3c;
        case 0x10be40u: goto label_10be40;
        case 0x10be44u: goto label_10be44;
        case 0x10be48u: goto label_10be48;
        case 0x10be4cu: goto label_10be4c;
        case 0x10be50u: goto label_10be50;
        case 0x10be54u: goto label_10be54;
        case 0x10be58u: goto label_10be58;
        case 0x10be5cu: goto label_10be5c;
        case 0x10be60u: goto label_10be60;
        case 0x10be64u: goto label_10be64;
        case 0x10be68u: goto label_10be68;
        case 0x10be6cu: goto label_10be6c;
        case 0x10be70u: goto label_10be70;
        case 0x10be74u: goto label_10be74;
        case 0x10be78u: goto label_10be78;
        case 0x10be7cu: goto label_10be7c;
        case 0x10be80u: goto label_10be80;
        case 0x10be84u: goto label_10be84;
        case 0x10be88u: goto label_10be88;
        case 0x10be8cu: goto label_10be8c;
        case 0x10be90u: goto label_10be90;
        case 0x10be94u: goto label_10be94;
        case 0x10be98u: goto label_10be98;
        case 0x10be9cu: goto label_10be9c;
        case 0x10bea0u: goto label_10bea0;
        case 0x10bea4u: goto label_10bea4;
        case 0x10bea8u: goto label_10bea8;
        case 0x10beacu: goto label_10beac;
        case 0x10beb0u: goto label_10beb0;
        case 0x10beb4u: goto label_10beb4;
        case 0x10beb8u: goto label_10beb8;
        case 0x10bebcu: goto label_10bebc;
        case 0x10bec0u: goto label_10bec0;
        case 0x10bec4u: goto label_10bec4;
        case 0x10bec8u: goto label_10bec8;
        case 0x10beccu: goto label_10becc;
        case 0x10bed0u: goto label_10bed0;
        case 0x10bed4u: goto label_10bed4;
        case 0x10bed8u: goto label_10bed8;
        case 0x10bedcu: goto label_10bedc;
        case 0x10bee0u: goto label_10bee0;
        case 0x10bee4u: goto label_10bee4;
        case 0x10bee8u: goto label_10bee8;
        case 0x10beecu: goto label_10beec;
        case 0x10bef0u: goto label_10bef0;
        case 0x10bef4u: goto label_10bef4;
        case 0x10bef8u: goto label_10bef8;
        case 0x10befcu: goto label_10befc;
        case 0x10bf00u: goto label_10bf00;
        case 0x10bf04u: goto label_10bf04;
        case 0x10bf08u: goto label_10bf08;
        case 0x10bf0cu: goto label_10bf0c;
        default: break;
    }

    ctx->pc = 0x10bc10u;

label_10bc10:
    // 0x10bc10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10bc14:
    // 0x10bc14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10bc18:
    // 0x10bc18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10bc1c:
    // 0x10bc1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10bc20:
    // 0x10bc20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10bc24:
    // 0x10bc24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10bc28:
    // 0x10bc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10bc2c:
    // 0x10bc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10bc30:
    // 0x10bc30: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x10bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_10bc34:
    // 0x10bc34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bc38:
    // 0x10bc38: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10bc3c:
    // 0x10bc3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10bc40:
    // 0x10bc40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_10bc44:
    // 0x10bc44: 0x320f809  jalr        $t9
label_10bc48:
    if (ctx->pc == 0x10BC48u) {
        ctx->pc = 0x10BC4Cu;
        goto label_10bc4c;
    }
    ctx->pc = 0x10BC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BC4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC44u, 0x10BC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BC4Cu;
label_10bc4c:
    // 0x10bc4c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x10bc4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10bc50:
    // 0x10bc50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10bc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bc54:
    // 0x10bc54: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x10bc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_10bc58:
    // 0x10bc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bc5c:
    // 0x10bc5c: 0x14620071  bne         $v1, $v0, . + 4 + (0x71 << 2)
label_10bc60:
    if (ctx->pc == 0x10BC60u) {
        ctx->pc = 0x10BC64u;
        goto label_10bc64;
    }
    ctx->pc = 0x10BC5Cu;
    {
        const bool branch_taken_0x10bc5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10bc5c) {
            ctx->pc = 0x10BE24u;
            goto label_10be24;
        }
    }
    ctx->pc = 0x10BC64u;
label_10bc64:
    // 0x10bc64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bc68:
    // 0x10bc68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10bc6c:
    // 0x10bc6c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bc70:
    // 0x10bc70: 0x24c61690  addiu       $a2, $a2, 0x1690
    ctx->pc = 0x10bc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5776));
label_10bc74:
    // 0x10bc74: 0xc0432e0  jal         func_10CB80
label_10bc78:
    if (ctx->pc == 0x10BC78u) {
        ctx->pc = 0x10BC7Cu;
        goto label_10bc7c;
    }
    ctx->pc = 0x10BC74u;
    SET_GPR_U32(ctx, 31, 0x10BC7Cu);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BC74u, 0x10BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC7Cu;
label_10bc7c:
    // 0x10bc7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bc80:
    // 0x10bc80: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bc84:
    // 0x10bc84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10bc88:
    // 0x10bc88: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bc8c:
    // 0x10bc8c: 0x24c616a0  addiu       $a2, $a2, 0x16A0
    ctx->pc = 0x10bc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5792));
label_10bc90:
    // 0x10bc90: 0xc0432e0  jal         func_10CB80
label_10bc94:
    if (ctx->pc == 0x10BC94u) {
        ctx->pc = 0x10BC98u;
        goto label_10bc98;
    }
    ctx->pc = 0x10BC90u;
    SET_GPR_U32(ctx, 31, 0x10BC98u);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BC90u, 0x10BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC98u;
label_10bc98:
    // 0x10bc98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bc9c:
    // 0x10bc9c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bca0:
    // 0x10bca0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10bca4:
    // 0x10bca4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bca8:
    // 0x10bca8: 0x24c616b0  addiu       $a2, $a2, 0x16B0
    ctx->pc = 0x10bca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5808));
label_10bcac:
    // 0x10bcac: 0xc0432e0  jal         func_10CB80
label_10bcb0:
    if (ctx->pc == 0x10BCB0u) {
        ctx->pc = 0x10BCB4u;
        goto label_10bcb4;
    }
    ctx->pc = 0x10BCACu;
    SET_GPR_U32(ctx, 31, 0x10BCB4u);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BCACu, 0x10BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCB4u;
label_10bcb4:
    // 0x10bcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bcb8:
    // 0x10bcb8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bcbc:
    // 0x10bcbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bcc0:
    // 0x10bcc0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bcc4:
    // 0x10bcc4: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x10bcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_10bcc8:
    // 0x10bcc8: 0xc0432e0  jal         func_10CB80
label_10bccc:
    if (ctx->pc == 0x10BCCCu) {
        ctx->pc = 0x10BCD0u;
        goto label_10bcd0;
    }
    ctx->pc = 0x10BCC8u;
    SET_GPR_U32(ctx, 31, 0x10BCD0u);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BCC8u, 0x10BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCD0u;
label_10bcd0:
    // 0x10bcd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bcd4:
    // 0x10bcd4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bcd8:
    // 0x10bcd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10bcdc:
    // 0x10bcdc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bce0:
    // 0x10bce0: 0x24c616d0  addiu       $a2, $a2, 0x16D0
    ctx->pc = 0x10bce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5840));
label_10bce4:
    // 0x10bce4: 0xc0432e0  jal         func_10CB80
label_10bce8:
    if (ctx->pc == 0x10BCE8u) {
        ctx->pc = 0x10BCECu;
        goto label_10bcec;
    }
    ctx->pc = 0x10BCE4u;
    SET_GPR_U32(ctx, 31, 0x10BCECu);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BCE4u, 0x10BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BCECu;
label_10bcec:
    // 0x10bcec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bcf0:
    // 0x10bcf0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bcf4:
    // 0x10bcf4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10bcf8:
    // 0x10bcf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bcfc:
    // 0x10bcfc: 0xc044da4  jal         func_113690
label_10bd00:
    if (ctx->pc == 0x10BD00u) {
        ctx->pc = 0x10BD04u;
        goto label_10bd04;
    }
    ctx->pc = 0x10BCFCu;
    SET_GPR_U32(ctx, 31, 0x10BD04u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x10BCFCu, 0x10BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD04u;
label_10bd04:
    // 0x10bd04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10bd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd08:
    // 0x10bd08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bd0c:
    // 0x10bd0c: 0xc0457e8  jal         func_115FA0
label_10bd10:
    if (ctx->pc == 0x10BD10u) {
        ctx->pc = 0x10BD14u;
        goto label_10bd14;
    }
    ctx->pc = 0x10BD0Cu;
    SET_GPR_U32(ctx, 31, 0x10BD14u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10BD0Cu, 0x10BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD14u;
label_10bd14:
    // 0x10bd14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10bd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd18:
    // 0x10bd18: 0x240503fa  addiu       $a1, $zero, 0x3FA
    ctx->pc = 0x10bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
label_10bd1c:
    // 0x10bd1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bd20:
    // 0x10bd20: 0xc041b54  jal         func_106D50
label_10bd24:
    if (ctx->pc == 0x10BD24u) {
        ctx->pc = 0x10BD28u;
        goto label_10bd28;
    }
    ctx->pc = 0x10BD20u;
    SET_GPR_U32(ctx, 31, 0x10BD28u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x10BD20u, 0x10BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD28u;
label_10bd28:
    // 0x10bd28: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bd2c:
    // 0x10bd2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x10bd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_10bd30:
    // 0x10bd30: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bd30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bd34:
    // 0x10bd34: 0x24c616e0  addiu       $a2, $a2, 0x16E0
    ctx->pc = 0x10bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5856));
label_10bd38:
    // 0x10bd38: 0xc0432e0  jal         func_10CB80
label_10bd3c:
    if (ctx->pc == 0x10BD3Cu) {
        ctx->pc = 0x10BD40u;
        goto label_10bd40;
    }
    ctx->pc = 0x10BD38u;
    SET_GPR_U32(ctx, 31, 0x10BD40u);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BD38u, 0x10BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD40u;
label_10bd40:
    // 0x10bd40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd44:
    // 0x10bd44: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bd48:
    // 0x10bd48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10bd4c:
    // 0x10bd4c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bd50:
    // 0x10bd50: 0x24c616f0  addiu       $a2, $a2, 0x16F0
    ctx->pc = 0x10bd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5872));
label_10bd54:
    // 0x10bd54: 0xc0432e0  jal         func_10CB80
label_10bd58:
    if (ctx->pc == 0x10BD58u) {
        ctx->pc = 0x10BD5Cu;
        goto label_10bd5c;
    }
    ctx->pc = 0x10BD54u;
    SET_GPR_U32(ctx, 31, 0x10BD5Cu);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BD54u, 0x10BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD5Cu;
label_10bd5c:
    // 0x10bd5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd60:
    // 0x10bd60: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bd64:
    // 0x10bd64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x10bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10bd68:
    // 0x10bd68: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bd6c:
    // 0x10bd6c: 0x24c61700  addiu       $a2, $a2, 0x1700
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5888));
label_10bd70:
    // 0x10bd70: 0xc0432e0  jal         func_10CB80
label_10bd74:
    if (ctx->pc == 0x10BD74u) {
        ctx->pc = 0x10BD78u;
        goto label_10bd78;
    }
    ctx->pc = 0x10BD70u;
    SET_GPR_U32(ctx, 31, 0x10BD78u);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BD70u, 0x10BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD78u;
label_10bd78:
    // 0x10bd78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd7c:
    // 0x10bd7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bd80:
    // 0x10bd80: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10bd84:
    // 0x10bd84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bd88:
    // 0x10bd88: 0xc044da4  jal         func_113690
label_10bd8c:
    if (ctx->pc == 0x10BD8Cu) {
        ctx->pc = 0x10BD90u;
        goto label_10bd90;
    }
    ctx->pc = 0x10BD88u;
    SET_GPR_U32(ctx, 31, 0x10BD90u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x10BD88u, 0x10BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD90u;
label_10bd90:
    // 0x10bd90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10bd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd94:
    // 0x10bd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bd98:
    // 0x10bd98: 0xc0457e8  jal         func_115FA0
label_10bd9c:
    if (ctx->pc == 0x10BD9Cu) {
        ctx->pc = 0x10BDA0u;
        goto label_10bda0;
    }
    ctx->pc = 0x10BD98u;
    SET_GPR_U32(ctx, 31, 0x10BDA0u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10BD98u, 0x10BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDA0u;
label_10bda0:
    // 0x10bda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bda4:
    // 0x10bda4: 0x240503fa  addiu       $a1, $zero, 0x3FA
    ctx->pc = 0x10bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
label_10bda8:
    // 0x10bda8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bdac:
    // 0x10bdac: 0xc041b54  jal         func_106D50
label_10bdb0:
    if (ctx->pc == 0x10BDB0u) {
        ctx->pc = 0x10BDB4u;
        goto label_10bdb4;
    }
    ctx->pc = 0x10BDACu;
    SET_GPR_U32(ctx, 31, 0x10BDB4u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x10BDACu, 0x10BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDB4u;
label_10bdb4:
    // 0x10bdb4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bdb8:
    // 0x10bdb8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10bdbc:
    // 0x10bdbc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10bdc0:
    // 0x10bdc0: 0x24c61710  addiu       $a2, $a2, 0x1710
    ctx->pc = 0x10bdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5904));
label_10bdc4:
    // 0x10bdc4: 0xc0432e0  jal         func_10CB80
label_10bdc8:
    if (ctx->pc == 0x10BDC8u) {
        ctx->pc = 0x10BDCCu;
        goto label_10bdcc;
    }
    ctx->pc = 0x10BDC4u;
    SET_GPR_U32(ctx, 31, 0x10BDCCu);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BDC4u, 0x10BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDCCu;
label_10bdcc:
    // 0x10bdcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bdd0:
    // 0x10bdd0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10bdd4:
    // 0x10bdd4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10bdd8:
    // 0x10bdd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bddc:
    // 0x10bddc: 0xc044da4  jal         func_113690
label_10bde0:
    if (ctx->pc == 0x10BDE0u) {
        ctx->pc = 0x10BDE4u;
        goto label_10bde4;
    }
    ctx->pc = 0x10BDDCu;
    SET_GPR_U32(ctx, 31, 0x10BDE4u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x10BDDCu, 0x10BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDE4u;
label_10bde4:
    // 0x10bde4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10bde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bde8:
    // 0x10bde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bdec:
    // 0x10bdec: 0xc0457e8  jal         func_115FA0
label_10bdf0:
    if (ctx->pc == 0x10BDF0u) {
        ctx->pc = 0x10BDF4u;
        goto label_10bdf4;
    }
    ctx->pc = 0x10BDECu;
    SET_GPR_U32(ctx, 31, 0x10BDF4u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10BDECu, 0x10BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDF4u;
label_10bdf4:
    // 0x10bdf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bdf8:
    // 0x10bdf8: 0x240503fa  addiu       $a1, $zero, 0x3FA
    ctx->pc = 0x10bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
label_10bdfc:
    // 0x10bdfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10be00:
    // 0x10be00: 0xc041b54  jal         func_106D50
label_10be04:
    if (ctx->pc == 0x10BE04u) {
        ctx->pc = 0x10BE08u;
        goto label_10be08;
    }
    ctx->pc = 0x10BE00u;
    SET_GPR_U32(ctx, 31, 0x10BE08u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x10BE00u, 0x10BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE08u;
label_10be08:
    // 0x10be08: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10be08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10be0c:
    // 0x10be0c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x10be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_10be10:
    // 0x10be10: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x10be10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_10be14:
    // 0x10be14: 0x24c61720  addiu       $a2, $a2, 0x1720
    ctx->pc = 0x10be14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5920));
label_10be18:
    // 0x10be18: 0xc0432e0  jal         func_10CB80
label_10be1c:
    if (ctx->pc == 0x10BE1Cu) {
        ctx->pc = 0x10BE20u;
        goto label_10be20;
    }
    ctx->pc = 0x10BE18u;
    SET_GPR_U32(ctx, 31, 0x10BE20u);
    ctx->pc = 0x10CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB80u, 0x10BE18u, 0x10BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE20u;
label_10be20:
    // 0x10be20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be24:
    // 0x10be24: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x10be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10be28:
    // 0x10be28: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x10be28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10be2c:
    // 0x10be2c: 0xc045180  jal         func_114600
label_10be30:
    if (ctx->pc == 0x10BE30u) {
        ctx->pc = 0x10BE34u;
        goto label_10be34;
    }
    ctx->pc = 0x10BE2Cu;
    SET_GPR_U32(ctx, 31, 0x10BE34u);
    ctx->pc = 0x114600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114600u, 0x10BE2Cu, 0x10BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE34u;
label_10be34:
    // 0x10be34: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x10be34u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10be38:
    // 0x10be38: 0xc09a360  jal         func_268D80
label_10be3c:
    if (ctx->pc == 0x10BE3Cu) {
        ctx->pc = 0x10BE40u;
        goto label_10be40;
    }
    ctx->pc = 0x10BE38u;
    SET_GPR_U32(ctx, 31, 0x10BE40u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x10BE38u, 0x10BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE40u;
label_10be40:
    // 0x10be40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10be40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be44:
    // 0x10be44: 0xc09a82c  jal         func_26A0B0
label_10be48:
    if (ctx->pc == 0x10BE48u) {
        ctx->pc = 0x10BE4Cu;
        goto label_10be4c;
    }
    ctx->pc = 0x10BE44u;
    SET_GPR_U32(ctx, 31, 0x10BE4Cu);
    ctx->pc = 0x26A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A0B0u, 0x10BE44u, 0x10BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE4Cu;
label_10be4c:
    // 0x10be4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10be4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be50:
    // 0x10be50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10be50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10be54:
    // 0x10be54: 0xc04312c  jal         func_10C4B0
label_10be58:
    if (ctx->pc == 0x10BE58u) {
        ctx->pc = 0x10BE5Cu;
        goto label_10be5c;
    }
    ctx->pc = 0x10BE54u;
    SET_GPR_U32(ctx, 31, 0x10BE5Cu);
    ctx->pc = 0x10C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C4B0u, 0x10BE54u, 0x10BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE5Cu;
label_10be5c:
    // 0x10be5c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_10be60:
    if (ctx->pc == 0x10BE60u) {
        ctx->pc = 0x10BE64u;
        goto label_10be64;
    }
    ctx->pc = 0x10BE5Cu;
    {
        const bool branch_taken_0x10be5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10be5c) {
            ctx->pc = 0x10BEE4u;
            goto label_10bee4;
        }
    }
    ctx->pc = 0x10BE64u;
label_10be64:
    // 0x10be64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10be64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10be68:
    // 0x10be68: 0xc0434d8  jal         func_10D360
label_10be6c:
    if (ctx->pc == 0x10BE6Cu) {
        ctx->pc = 0x10BE70u;
        goto label_10be70;
    }
    ctx->pc = 0x10BE68u;
    SET_GPR_U32(ctx, 31, 0x10BE70u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x10BE68u, 0x10BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE70u;
label_10be70:
    // 0x10be70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be74:
    // 0x10be74: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x10be74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_10be78:
    // 0x10be78: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x10be78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
label_10be7c:
    // 0x10be7c: 0xc044edc  jal         func_113B70
label_10be80:
    if (ctx->pc == 0x10BE80u) {
        ctx->pc = 0x10BE84u;
        goto label_10be84;
    }
    ctx->pc = 0x10BE7Cu;
    SET_GPR_U32(ctx, 31, 0x10BE84u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x10BE7Cu, 0x10BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE84u;
label_10be84:
    // 0x10be84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10be84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10be88:
    // 0x10be88: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_10be8c:
    if (ctx->pc == 0x10BE8Cu) {
        ctx->pc = 0x10BE90u;
        goto label_10be90;
    }
    ctx->pc = 0x10BE88u;
    {
        const bool branch_taken_0x10be88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10be88) {
            ctx->pc = 0x10BEE4u;
            goto label_10bee4;
        }
    }
    ctx->pc = 0x10BE90u;
label_10be90:
    // 0x10be90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10be94:
    // 0x10be94: 0xc0457e8  jal         func_115FA0
label_10be98:
    if (ctx->pc == 0x10BE98u) {
        ctx->pc = 0x10BE9Cu;
        goto label_10be9c;
    }
    ctx->pc = 0x10BE94u;
    SET_GPR_U32(ctx, 31, 0x10BE9Cu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x10BE94u, 0x10BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE9Cu;
label_10be9c:
    // 0x10be9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bea0:
    // 0x10bea0: 0x24050465  addiu       $a1, $zero, 0x465
    ctx->pc = 0x10bea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1125));
label_10bea4:
    // 0x10bea4: 0x278684e4  addiu       $a2, $gp, -0x7B1C
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935780));
label_10bea8:
    // 0x10bea8: 0xc041a50  jal         func_106940
label_10beac:
    if (ctx->pc == 0x10BEACu) {
        ctx->pc = 0x10BEB0u;
        goto label_10beb0;
    }
    ctx->pc = 0x10BEA8u;
    SET_GPR_U32(ctx, 31, 0x10BEB0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x10BEA8u, 0x10BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEB0u;
label_10beb0:
    // 0x10beb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10beb4:
    // 0x10beb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10beb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10beb8:
    // 0x10beb8: 0xc040304  jal         func_100C10
label_10bebc:
    if (ctx->pc == 0x10BEBCu) {
        ctx->pc = 0x10BEC0u;
        goto label_10bec0;
    }
    ctx->pc = 0x10BEB8u;
    SET_GPR_U32(ctx, 31, 0x10BEC0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x10BEB8u, 0x10BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEC0u;
label_10bec0:
    // 0x10bec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bec4:
    // 0x10bec4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x10bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10bec8:
    // 0x10bec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10becc:
    // 0x10becc: 0xc042fc4  jal         func_10BF10
label_10bed0:
    if (ctx->pc == 0x10BED0u) {
        ctx->pc = 0x10BED4u;
        goto label_10bed4;
    }
    ctx->pc = 0x10BECCu;
    SET_GPR_U32(ctx, 31, 0x10BED4u);
    ctx->pc = 0x10BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF10u, 0x10BECCu, 0x10BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BED4u;
label_10bed4:
    // 0x10bed4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x10bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10bed8:
    // 0x10bed8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10bedc:
    // 0x10bedc: 0xc0402d4  jal         func_100B50
label_10bee0:
    if (ctx->pc == 0x10BEE0u) {
        ctx->pc = 0x10BEE4u;
        goto label_10bee4;
    }
    ctx->pc = 0x10BEDCu;
    SET_GPR_U32(ctx, 31, 0x10BEE4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x10BEDCu, 0x10BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEE4u;
label_10bee4:
    // 0x10bee4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10bee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bee8:
    // 0x10bee8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10bee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10beec:
    // 0x10beec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10beecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10bef0:
    // 0x10bef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10bef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10bef4:
    // 0x10bef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10bef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10bef8:
    // 0x10bef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10bef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10befc:
    // 0x10befc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10befcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bf00:
    // 0x10bf00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10bf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10bf04:
    // 0x10bf04: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x10bf04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10bf08:
    // 0x10bf08: 0x3e00008  jr          $ra
label_10bf0c:
    if (ctx->pc == 0x10BF0Cu) {
        ctx->pc = 0x10BF10u;
        goto label_fallthrough_0x10bf08;
    }
    ctx->pc = 0x10BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bf08:
    ctx->pc = 0x10BF10u;
}
