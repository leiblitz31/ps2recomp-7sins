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

// Function: sub_0031BB90
// Address: 0x31bb90 - 0x31bf38
void sub_0031BB90_0x31bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BB90_0x31bb90");
#endif

    switch (ctx->pc) {
        case 0x31bb90u: goto label_31bb90;
        case 0x31bb94u: goto label_31bb94;
        case 0x31bb98u: goto label_31bb98;
        case 0x31bb9cu: goto label_31bb9c;
        case 0x31bba0u: goto label_31bba0;
        case 0x31bba4u: goto label_31bba4;
        case 0x31bba8u: goto label_31bba8;
        case 0x31bbacu: goto label_31bbac;
        case 0x31bbb0u: goto label_31bbb0;
        case 0x31bbb4u: goto label_31bbb4;
        case 0x31bbb8u: goto label_31bbb8;
        case 0x31bbbcu: goto label_31bbbc;
        case 0x31bbc0u: goto label_31bbc0;
        case 0x31bbc4u: goto label_31bbc4;
        case 0x31bbc8u: goto label_31bbc8;
        case 0x31bbccu: goto label_31bbcc;
        case 0x31bbd0u: goto label_31bbd0;
        case 0x31bbd4u: goto label_31bbd4;
        case 0x31bbd8u: goto label_31bbd8;
        case 0x31bbdcu: goto label_31bbdc;
        case 0x31bbe0u: goto label_31bbe0;
        case 0x31bbe4u: goto label_31bbe4;
        case 0x31bbe8u: goto label_31bbe8;
        case 0x31bbecu: goto label_31bbec;
        case 0x31bbf0u: goto label_31bbf0;
        case 0x31bbf4u: goto label_31bbf4;
        case 0x31bbf8u: goto label_31bbf8;
        case 0x31bbfcu: goto label_31bbfc;
        case 0x31bc00u: goto label_31bc00;
        case 0x31bc04u: goto label_31bc04;
        case 0x31bc08u: goto label_31bc08;
        case 0x31bc0cu: goto label_31bc0c;
        case 0x31bc10u: goto label_31bc10;
        case 0x31bc14u: goto label_31bc14;
        case 0x31bc18u: goto label_31bc18;
        case 0x31bc1cu: goto label_31bc1c;
        case 0x31bc20u: goto label_31bc20;
        case 0x31bc24u: goto label_31bc24;
        case 0x31bc28u: goto label_31bc28;
        case 0x31bc2cu: goto label_31bc2c;
        case 0x31bc30u: goto label_31bc30;
        case 0x31bc34u: goto label_31bc34;
        case 0x31bc38u: goto label_31bc38;
        case 0x31bc3cu: goto label_31bc3c;
        case 0x31bc40u: goto label_31bc40;
        case 0x31bc44u: goto label_31bc44;
        case 0x31bc48u: goto label_31bc48;
        case 0x31bc4cu: goto label_31bc4c;
        case 0x31bc50u: goto label_31bc50;
        case 0x31bc54u: goto label_31bc54;
        case 0x31bc58u: goto label_31bc58;
        case 0x31bc5cu: goto label_31bc5c;
        case 0x31bc60u: goto label_31bc60;
        case 0x31bc64u: goto label_31bc64;
        case 0x31bc68u: goto label_31bc68;
        case 0x31bc6cu: goto label_31bc6c;
        case 0x31bc70u: goto label_31bc70;
        case 0x31bc74u: goto label_31bc74;
        case 0x31bc78u: goto label_31bc78;
        case 0x31bc7cu: goto label_31bc7c;
        case 0x31bc80u: goto label_31bc80;
        case 0x31bc84u: goto label_31bc84;
        case 0x31bc88u: goto label_31bc88;
        case 0x31bc8cu: goto label_31bc8c;
        case 0x31bc90u: goto label_31bc90;
        case 0x31bc94u: goto label_31bc94;
        case 0x31bc98u: goto label_31bc98;
        case 0x31bc9cu: goto label_31bc9c;
        case 0x31bca0u: goto label_31bca0;
        case 0x31bca4u: goto label_31bca4;
        case 0x31bca8u: goto label_31bca8;
        case 0x31bcacu: goto label_31bcac;
        case 0x31bcb0u: goto label_31bcb0;
        case 0x31bcb4u: goto label_31bcb4;
        case 0x31bcb8u: goto label_31bcb8;
        case 0x31bcbcu: goto label_31bcbc;
        case 0x31bcc0u: goto label_31bcc0;
        case 0x31bcc4u: goto label_31bcc4;
        case 0x31bcc8u: goto label_31bcc8;
        case 0x31bcccu: goto label_31bccc;
        case 0x31bcd0u: goto label_31bcd0;
        case 0x31bcd4u: goto label_31bcd4;
        case 0x31bcd8u: goto label_31bcd8;
        case 0x31bcdcu: goto label_31bcdc;
        case 0x31bce0u: goto label_31bce0;
        case 0x31bce4u: goto label_31bce4;
        case 0x31bce8u: goto label_31bce8;
        case 0x31bcecu: goto label_31bcec;
        case 0x31bcf0u: goto label_31bcf0;
        case 0x31bcf4u: goto label_31bcf4;
        case 0x31bcf8u: goto label_31bcf8;
        case 0x31bcfcu: goto label_31bcfc;
        case 0x31bd00u: goto label_31bd00;
        case 0x31bd04u: goto label_31bd04;
        case 0x31bd08u: goto label_31bd08;
        case 0x31bd0cu: goto label_31bd0c;
        case 0x31bd10u: goto label_31bd10;
        case 0x31bd14u: goto label_31bd14;
        case 0x31bd18u: goto label_31bd18;
        case 0x31bd1cu: goto label_31bd1c;
        case 0x31bd20u: goto label_31bd20;
        case 0x31bd24u: goto label_31bd24;
        case 0x31bd28u: goto label_31bd28;
        case 0x31bd2cu: goto label_31bd2c;
        case 0x31bd30u: goto label_31bd30;
        case 0x31bd34u: goto label_31bd34;
        case 0x31bd38u: goto label_31bd38;
        case 0x31bd3cu: goto label_31bd3c;
        case 0x31bd40u: goto label_31bd40;
        case 0x31bd44u: goto label_31bd44;
        case 0x31bd48u: goto label_31bd48;
        case 0x31bd4cu: goto label_31bd4c;
        case 0x31bd50u: goto label_31bd50;
        case 0x31bd54u: goto label_31bd54;
        case 0x31bd58u: goto label_31bd58;
        case 0x31bd5cu: goto label_31bd5c;
        case 0x31bd60u: goto label_31bd60;
        case 0x31bd64u: goto label_31bd64;
        case 0x31bd68u: goto label_31bd68;
        case 0x31bd6cu: goto label_31bd6c;
        case 0x31bd70u: goto label_31bd70;
        case 0x31bd74u: goto label_31bd74;
        case 0x31bd78u: goto label_31bd78;
        case 0x31bd7cu: goto label_31bd7c;
        case 0x31bd80u: goto label_31bd80;
        case 0x31bd84u: goto label_31bd84;
        case 0x31bd88u: goto label_31bd88;
        case 0x31bd8cu: goto label_31bd8c;
        case 0x31bd90u: goto label_31bd90;
        case 0x31bd94u: goto label_31bd94;
        case 0x31bd98u: goto label_31bd98;
        case 0x31bd9cu: goto label_31bd9c;
        case 0x31bda0u: goto label_31bda0;
        case 0x31bda4u: goto label_31bda4;
        case 0x31bda8u: goto label_31bda8;
        case 0x31bdacu: goto label_31bdac;
        case 0x31bdb0u: goto label_31bdb0;
        case 0x31bdb4u: goto label_31bdb4;
        case 0x31bdb8u: goto label_31bdb8;
        case 0x31bdbcu: goto label_31bdbc;
        case 0x31bdc0u: goto label_31bdc0;
        case 0x31bdc4u: goto label_31bdc4;
        case 0x31bdc8u: goto label_31bdc8;
        case 0x31bdccu: goto label_31bdcc;
        case 0x31bdd0u: goto label_31bdd0;
        case 0x31bdd4u: goto label_31bdd4;
        case 0x31bdd8u: goto label_31bdd8;
        case 0x31bddcu: goto label_31bddc;
        case 0x31bde0u: goto label_31bde0;
        case 0x31bde4u: goto label_31bde4;
        case 0x31bde8u: goto label_31bde8;
        case 0x31bdecu: goto label_31bdec;
        case 0x31bdf0u: goto label_31bdf0;
        case 0x31bdf4u: goto label_31bdf4;
        case 0x31bdf8u: goto label_31bdf8;
        case 0x31bdfcu: goto label_31bdfc;
        case 0x31be00u: goto label_31be00;
        case 0x31be04u: goto label_31be04;
        case 0x31be08u: goto label_31be08;
        case 0x31be0cu: goto label_31be0c;
        case 0x31be10u: goto label_31be10;
        case 0x31be14u: goto label_31be14;
        case 0x31be18u: goto label_31be18;
        case 0x31be1cu: goto label_31be1c;
        case 0x31be20u: goto label_31be20;
        case 0x31be24u: goto label_31be24;
        case 0x31be28u: goto label_31be28;
        case 0x31be2cu: goto label_31be2c;
        case 0x31be30u: goto label_31be30;
        case 0x31be34u: goto label_31be34;
        case 0x31be38u: goto label_31be38;
        case 0x31be3cu: goto label_31be3c;
        case 0x31be40u: goto label_31be40;
        case 0x31be44u: goto label_31be44;
        case 0x31be48u: goto label_31be48;
        case 0x31be4cu: goto label_31be4c;
        case 0x31be50u: goto label_31be50;
        case 0x31be54u: goto label_31be54;
        case 0x31be58u: goto label_31be58;
        case 0x31be5cu: goto label_31be5c;
        case 0x31be60u: goto label_31be60;
        case 0x31be64u: goto label_31be64;
        case 0x31be68u: goto label_31be68;
        case 0x31be6cu: goto label_31be6c;
        case 0x31be70u: goto label_31be70;
        case 0x31be74u: goto label_31be74;
        case 0x31be78u: goto label_31be78;
        case 0x31be7cu: goto label_31be7c;
        case 0x31be80u: goto label_31be80;
        case 0x31be84u: goto label_31be84;
        case 0x31be88u: goto label_31be88;
        case 0x31be8cu: goto label_31be8c;
        case 0x31be90u: goto label_31be90;
        case 0x31be94u: goto label_31be94;
        case 0x31be98u: goto label_31be98;
        case 0x31be9cu: goto label_31be9c;
        case 0x31bea0u: goto label_31bea0;
        case 0x31bea4u: goto label_31bea4;
        case 0x31bea8u: goto label_31bea8;
        case 0x31beacu: goto label_31beac;
        case 0x31beb0u: goto label_31beb0;
        case 0x31beb4u: goto label_31beb4;
        case 0x31beb8u: goto label_31beb8;
        case 0x31bebcu: goto label_31bebc;
        case 0x31bec0u: goto label_31bec0;
        case 0x31bec4u: goto label_31bec4;
        case 0x31bec8u: goto label_31bec8;
        case 0x31beccu: goto label_31becc;
        case 0x31bed0u: goto label_31bed0;
        case 0x31bed4u: goto label_31bed4;
        case 0x31bed8u: goto label_31bed8;
        case 0x31bedcu: goto label_31bedc;
        case 0x31bee0u: goto label_31bee0;
        case 0x31bee4u: goto label_31bee4;
        case 0x31bee8u: goto label_31bee8;
        case 0x31beecu: goto label_31beec;
        case 0x31bef0u: goto label_31bef0;
        case 0x31bef4u: goto label_31bef4;
        case 0x31bef8u: goto label_31bef8;
        case 0x31befcu: goto label_31befc;
        case 0x31bf00u: goto label_31bf00;
        case 0x31bf04u: goto label_31bf04;
        case 0x31bf08u: goto label_31bf08;
        case 0x31bf0cu: goto label_31bf0c;
        case 0x31bf10u: goto label_31bf10;
        case 0x31bf14u: goto label_31bf14;
        case 0x31bf18u: goto label_31bf18;
        case 0x31bf1cu: goto label_31bf1c;
        case 0x31bf20u: goto label_31bf20;
        case 0x31bf24u: goto label_31bf24;
        case 0x31bf28u: goto label_31bf28;
        case 0x31bf2cu: goto label_31bf2c;
        case 0x31bf30u: goto label_31bf30;
        case 0x31bf34u: goto label_31bf34;
        default: break;
    }

    ctx->pc = 0x31bb90u;

label_31bb90:
    // 0x31bb90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31bb94:
    // 0x31bb94: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31bb98:
    // 0x31bb98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_31bb9c:
    // 0x31bb9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31bb9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31bba0:
    // 0x31bba0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31bba4:
    // 0x31bba4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_31bba8:
    // 0x31bba8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_31bbac:
    // 0x31bbac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_31bbb0:
    // 0x31bbb0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31bbb4:
    // 0x31bbb4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_31bbb8:
    // 0x31bbb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31bbbc:
    // 0x31bbbc: 0xc0c7066  jal         func_31C198
label_31bbc0:
    if (ctx->pc == 0x31BBC0u) {
        ctx->pc = 0x31BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBBCu;
        // 0x31bbc0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BBC4u;
        goto label_31bbc4;
    }
    ctx->pc = 0x31BBBCu;
    SET_GPR_U32(ctx, 31, 0x31BBC4u);
    ctx->pc = 0x31BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBBCu;
    // 0x31bbc0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C198u, 0x31BBBCu, 0x31BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBC4u;
label_31bbc4:
    // 0x31bbc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bbc8:
    // 0x31bbc8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x31bbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_31bbcc:
    // 0x31bbcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31bbd0:
    // 0x31bbd0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x31bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_31bbd4:
    // 0x31bbd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31bbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bbd8:
    // 0x31bbd8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x31bbd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_31bbdc:
    // 0x31bbdc: 0xc103404  jal         func_40D010
label_31bbe0:
    if (ctx->pc == 0x31BBE0u) {
        ctx->pc = 0x31BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBDCu;
        // 0x31bbe0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BBE4u;
        goto label_31bbe4;
    }
    ctx->pc = 0x31BBDCu;
    SET_GPR_U32(ctx, 31, 0x31BBE4u);
    ctx->pc = 0x31BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBDCu;
    // 0x31bbe0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x31BBDCu, 0x31BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBE4u;
label_31bbe4:
    // 0x31bbe4: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_31bbe8:
    if (ctx->pc == 0x31BBE8u) {
        ctx->pc = 0x31BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBE4u;
        // 0x31bbe8: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BBECu;
        goto label_31bbec;
    }
    ctx->pc = 0x31BBE4u;
    {
        const bool branch_taken_0x31bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBE4u;
        // 0x31bbe8: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbe4) {
            ctx->pc = 0x31BD94u;
            goto label_31bd94;
        }
    }
    ctx->pc = 0x31BBECu;
label_31bbec:
    // 0x31bbec: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x31bbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_31bbf0:
    // 0x31bbf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31bbf4:
    // 0x31bbf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bbf8:
    // 0x31bbf8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x31bbf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_31bbfc:
    // 0x31bbfc: 0xc103404  jal         func_40D010
label_31bc00:
    if (ctx->pc == 0x31BC00u) {
        ctx->pc = 0x31BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBFCu;
        // 0x31bc00: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC04u;
        goto label_31bc04;
    }
    ctx->pc = 0x31BBFCu;
    SET_GPR_U32(ctx, 31, 0x31BC04u);
    ctx->pc = 0x31BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBFCu;
    // 0x31bc00: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x31BBFCu, 0x31BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC04u;
label_31bc04:
    // 0x31bc04: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_31bc08:
    if (ctx->pc == 0x31BC08u) {
        ctx->pc = 0x31BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC04u;
        // 0x31bc08: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC0Cu;
        goto label_31bc0c;
    }
    ctx->pc = 0x31BC04u;
    {
        const bool branch_taken_0x31bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC04u;
        // 0x31bc08: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc04) {
            ctx->pc = 0x31BD94u;
            goto label_31bd94;
        }
    }
    ctx->pc = 0x31BC0Cu;
label_31bc0c:
    // 0x31bc0c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x31bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_31bc10:
    // 0x31bc10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31bc14:
    // 0x31bc14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31bc14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bc18:
    // 0x31bc18: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_31bc1c:
    // 0x31bc1c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_31bc20:
    if (ctx->pc == 0x31BC20u) {
        ctx->pc = 0x31BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC1Cu;
        // 0x31bc20: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC24u;
        goto label_31bc24;
    }
    ctx->pc = 0x31BC1Cu;
    {
        const bool branch_taken_0x31bc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC1Cu;
        // 0x31bc20: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc1c) {
            ctx->pc = 0x31BCC4u;
            goto label_31bcc4;
        }
    }
    ctx->pc = 0x31BC24u;
label_31bc24:
    // 0x31bc24: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x31bc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_31bc28:
    // 0x31bc28: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x31bc28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31bc2c:
    // 0x31bc2c: 0x31040003  andi        $a0, $t0, 0x3
    ctx->pc = 0x31bc2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_31bc30:
    // 0x31bc30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31bc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bc34:
    // 0x31bc34: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
label_31bc38:
    if (ctx->pc == 0x31BC38u) {
        ctx->pc = 0x31BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC34u;
        // 0x31bc38: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC3Cu;
        goto label_31bc3c;
    }
    ctx->pc = 0x31BC34u;
    {
        const bool branch_taken_0x31bc34 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x31BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC34u;
        // 0x31bc38: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc34) {
            ctx->pc = 0x31BC74u;
            goto label_31bc74;
        }
    }
    ctx->pc = 0x31BC3Cu;
label_31bc3c:
    // 0x31bc3c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_31bc40:
    if (ctx->pc == 0x31BC40u) {
        ctx->pc = 0x31BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC3Cu;
        // 0x31bc40: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC44u;
        goto label_31bc44;
    }
    ctx->pc = 0x31BC3Cu;
    {
        const bool branch_taken_0x31bc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC3Cu;
        // 0x31bc40: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc3c) {
            ctx->pc = 0x31BC8Cu;
            goto label_31bc8c;
        }
    }
    ctx->pc = 0x31BC44u;
label_31bc44:
    // 0x31bc44: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_31bc48:
    if (ctx->pc == 0x31BC48u) {
        ctx->pc = 0x31BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC44u;
        // 0x31bc48: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC4Cu;
        goto label_31bc4c;
    }
    ctx->pc = 0x31BC44u;
    {
        const bool branch_taken_0x31bc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bc44) {
            ctx->pc = 0x31BC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC44u;
            // 0x31bc48: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BC78u;
            goto label_31bc78;
        }
    }
    ctx->pc = 0x31BC4Cu;
label_31bc4c:
    // 0x31bc4c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x31bc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_31bc50:
    // 0x31bc50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_31bc54:
    if (ctx->pc == 0x31BC54u) {
        ctx->pc = 0x31BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC50u;
        // 0x31bc54: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC58u;
        goto label_31bc58;
    }
    ctx->pc = 0x31BC50u;
    {
        const bool branch_taken_0x31bc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bc50) {
            ctx->pc = 0x31BC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC50u;
            // 0x31bc54: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BC68u;
            goto label_31bc68;
        }
    }
    ctx->pc = 0x31BC58u;
label_31bc58:
    // 0x31bc58: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x31bc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31bc5c:
    // 0x31bc5c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x31bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_31bc60:
    // 0x31bc60: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x31bc60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bc64:
    // 0x31bc64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31bc68:
    // 0x31bc68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31bc68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31bc6c:
    // 0x31bc6c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31bc70:
    // 0x31bc70: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31bc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31bc74:
    // 0x31bc74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31bc78:
    // 0x31bc78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31bc78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31bc7c:
    // 0x31bc7c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31bc80:
    // 0x31bc80: 0x288382b  sltu        $a3, $s4, $t0
    ctx->pc = 0x31bc80u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_31bc84:
    // 0x31bc84: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
label_31bc88:
    if (ctx->pc == 0x31BC88u) {
        ctx->pc = 0x31BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC84u;
        // 0x31bc88: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC8Cu;
        goto label_31bc8c;
    }
    ctx->pc = 0x31BC84u;
    {
        const bool branch_taken_0x31bc84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC84u;
        // 0x31bc88: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc84) {
            ctx->pc = 0x31BCC0u;
            goto label_31bcc0;
        }
    }
    ctx->pc = 0x31BC8Cu;
label_31bc8c:
    // 0x31bc8c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31bc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31bc90:
    // 0x31bc90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31bc94:
    // 0x31bc94: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x31bc94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_31bc98:
    // 0x31bc98: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_31bc9c:
    // 0x31bc9c: 0x288382b  sltu        $a3, $s4, $t0
    ctx->pc = 0x31bc9cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_31bca0:
    // 0x31bca0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31bca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_31bca4:
    // 0x31bca4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x31bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_31bca8:
    // 0x31bca8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x31bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_31bcac:
    // 0x31bcac: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x31bcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_31bcb0:
    // 0x31bcb0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31bcb4:
    // 0x31bcb4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x31bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_31bcb8:
    // 0x31bcb8: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
label_31bcbc:
    if (ctx->pc == 0x31BCBCu) {
        ctx->pc = 0x31BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCB8u;
        // 0x31bcbc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCC0u;
        goto label_31bcc0;
    }
    ctx->pc = 0x31BCB8u;
    {
        const bool branch_taken_0x31bcb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCB8u;
        // 0x31bcbc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcb8) {
            ctx->pc = 0x31BC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bc90;
        }
    }
    ctx->pc = 0x31BCC0u;
label_31bcc0:
    // 0x31bcc0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x31bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_31bcc4:
    // 0x31bcc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31bcc8:
    // 0x31bcc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31bcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31bccc:
    // 0x31bccc: 0xc103440  jal         func_40D100
label_31bcd0:
    if (ctx->pc == 0x31BCD0u) {
        ctx->pc = 0x31BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCCCu;
        // 0x31bcd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCD4u;
        goto label_31bcd4;
    }
    ctx->pc = 0x31BCCCu;
    SET_GPR_U32(ctx, 31, 0x31BCD4u);
    ctx->pc = 0x31BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCCCu;
    // 0x31bcd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31BCCCu, 0x31BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCD4u;
label_31bcd4:
    // 0x31bcd4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_31bcd8:
    if (ctx->pc == 0x31BCD8u) {
        ctx->pc = 0x31BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCD4u;
        // 0x31bcd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCDCu;
        goto label_31bcdc;
    }
    ctx->pc = 0x31BCD4u;
    {
        const bool branch_taken_0x31bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCD4u;
        // 0x31bcd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcd4) {
            ctx->pc = 0x31BD94u;
            goto label_31bd94;
        }
    }
    ctx->pc = 0x31BCDCu;
label_31bcdc:
    // 0x31bcdc: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x31bcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_31bce0:
    // 0x31bce0: 0xc103440  jal         func_40D100
label_31bce4:
    if (ctx->pc == 0x31BCE4u) {
        ctx->pc = 0x31BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCE0u;
        // 0x31bce4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCE8u;
        goto label_31bce8;
    }
    ctx->pc = 0x31BCE0u;
    SET_GPR_U32(ctx, 31, 0x31BCE8u);
    ctx->pc = 0x31BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCE0u;
    // 0x31bce4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31BCE0u, 0x31BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCE8u;
label_31bce8:
    // 0x31bce8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_31bcec:
    if (ctx->pc == 0x31BCECu) {
        ctx->pc = 0x31BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCE8u;
        // 0x31bcec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCF0u;
        goto label_31bcf0;
    }
    ctx->pc = 0x31BCE8u;
    {
        const bool branch_taken_0x31bce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCE8u;
        // 0x31bcec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bce8) {
            ctx->pc = 0x31BD94u;
            goto label_31bd94;
        }
    }
    ctx->pc = 0x31BCF0u;
label_31bcf0:
    // 0x31bcf0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31bcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31bcf4:
    // 0x31bcf4: 0xc103440  jal         func_40D100
label_31bcf8:
    if (ctx->pc == 0x31BCF8u) {
        ctx->pc = 0x31BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCF4u;
        // 0x31bcf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCFCu;
        goto label_31bcfc;
    }
    ctx->pc = 0x31BCF4u;
    SET_GPR_U32(ctx, 31, 0x31BCFCu);
    ctx->pc = 0x31BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCF4u;
    // 0x31bcf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31BCF4u, 0x31BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCFCu;
label_31bcfc:
    // 0x31bcfc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_31bd00:
    if (ctx->pc == 0x31BD00u) {
        ctx->pc = 0x31BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCFCu;
        // 0x31bd00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD04u;
        goto label_31bd04;
    }
    ctx->pc = 0x31BCFCu;
    {
        const bool branch_taken_0x31bcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCFCu;
        // 0x31bd00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcfc) {
            ctx->pc = 0x31BD94u;
            goto label_31bd94;
        }
    }
    ctx->pc = 0x31BD04u;
label_31bd04:
    // 0x31bd04: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x31bd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_31bd08:
    // 0x31bd08: 0xc103440  jal         func_40D100
label_31bd0c:
    if (ctx->pc == 0x31BD0Cu) {
        ctx->pc = 0x31BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD08u;
        // 0x31bd0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD10u;
        goto label_31bd10;
    }
    ctx->pc = 0x31BD08u;
    SET_GPR_U32(ctx, 31, 0x31BD10u);
    ctx->pc = 0x31BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD08u;
    // 0x31bd0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31BD08u, 0x31BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD10u;
label_31bd10:
    // 0x31bd10: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_31bd14:
    if (ctx->pc == 0x31BD14u) {
        ctx->pc = 0x31BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD10u;
        // 0x31bd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD18u;
        goto label_31bd18;
    }
    ctx->pc = 0x31BD10u;
    {
        const bool branch_taken_0x31bd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD10u;
        // 0x31bd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd10) {
            ctx->pc = 0x31BDC8u;
            goto label_31bdc8;
        }
    }
    ctx->pc = 0x31BD18u;
label_31bd18:
    // 0x31bd18: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_31bd1c:
    // 0x31bd1c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_31bd20:
    if (ctx->pc == 0x31BD20u) {
        ctx->pc = 0x31BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD1Cu;
        // 0x31bd20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD24u;
        goto label_31bd24;
    }
    ctx->pc = 0x31BD1Cu;
    {
        const bool branch_taken_0x31bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD1Cu;
        // 0x31bd20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd1c) {
            ctx->pc = 0x31BDC4u;
            goto label_31bdc4;
        }
    }
    ctx->pc = 0x31BD24u;
label_31bd24:
    // 0x31bd24: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31bd24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bd28:
    // 0x31bd28: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x31bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_31bd2c:
    // 0x31bd2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31bd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31bd30:
    // 0x31bd30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31bd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31bd34:
    // 0x31bd34: 0x579821  addu        $s3, $v0, $s7
    ctx->pc = 0x31bd34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_31bd38:
    // 0x31bd38: 0xc103440  jal         func_40D100
label_31bd3c:
    if (ctx->pc == 0x31BD3Cu) {
        ctx->pc = 0x31BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD38u;
        // 0x31bd3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD40u;
        goto label_31bd40;
    }
    ctx->pc = 0x31BD38u;
    SET_GPR_U32(ctx, 31, 0x31BD40u);
    ctx->pc = 0x31BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD38u;
    // 0x31bd3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31BD38u, 0x31BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD40u;
label_31bd40:
    // 0x31bd40: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_31bd44:
    if (ctx->pc == 0x31BD44u) {
        ctx->pc = 0x31BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD40u;
        // 0x31bd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD48u;
        goto label_31bd48;
    }
    ctx->pc = 0x31BD40u;
    {
        const bool branch_taken_0x31bd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD40u;
        // 0x31bd44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd40) {
            ctx->pc = 0x31BDC8u;
            goto label_31bdc8;
        }
    }
    ctx->pc = 0x31BD48u;
label_31bd48:
    // 0x31bd48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31bd4c:
    // 0x31bd4c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_31bd50:
    if (ctx->pc == 0x31BD50u) {
        ctx->pc = 0x31BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD4Cu;
        // 0x31bd50: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD54u;
        goto label_31bd54;
    }
    ctx->pc = 0x31BD4Cu;
    {
        const bool branch_taken_0x31bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bd4c) {
            ctx->pc = 0x31BD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BD4Cu;
            // 0x31bd50: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BDB4u;
            goto label_31bdb4;
        }
    }
    ctx->pc = 0x31BD54u;
label_31bd54:
    // 0x31bd54: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x31bd54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31bd58:
    // 0x31bd58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_31bd5c:
    if (ctx->pc == 0x31BD5Cu) {
        ctx->pc = 0x31BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD58u;
        // 0x31bd5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD60u;
        goto label_31bd60;
    }
    ctx->pc = 0x31BD58u;
    {
        const bool branch_taken_0x31bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD58u;
        // 0x31bd5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd58) {
            ctx->pc = 0x31BDB0u;
            goto label_31bdb0;
        }
    }
    ctx->pc = 0x31BD60u;
label_31bd60:
    // 0x31bd60: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x31bd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_31bd64:
    // 0x31bd64: 0x0  nop
    ctx->pc = 0x31bd64u;
    // NOP
label_31bd68:
    // 0x31bd68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31bd6c:
    // 0x31bd6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31bd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31bd70:
    // 0x31bd70: 0xc10341a  jal         func_40D068
label_31bd74:
    if (ctx->pc == 0x31BD74u) {
        ctx->pc = 0x31BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD70u;
        // 0x31bd74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD78u;
        goto label_31bd78;
    }
    ctx->pc = 0x31BD70u;
    SET_GPR_U32(ctx, 31, 0x31BD78u);
    ctx->pc = 0x31BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD70u;
    // 0x31bd74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x31BD70u, 0x31BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD78u;
label_31bd78:
    // 0x31bd78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_31bd7c:
    if (ctx->pc == 0x31BD7Cu) {
        ctx->pc = 0x31BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD78u;
        // 0x31bd7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD80u;
        goto label_31bd80;
    }
    ctx->pc = 0x31BD78u;
    {
        const bool branch_taken_0x31bd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD78u;
        // 0x31bd7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd78) {
            ctx->pc = 0x31BD94u;
            goto label_31bd94;
        }
    }
    ctx->pc = 0x31BD80u;
label_31bd80:
    // 0x31bd80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31bd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31bd84:
    // 0x31bd84: 0xc103440  jal         func_40D100
label_31bd88:
    if (ctx->pc == 0x31BD88u) {
        ctx->pc = 0x31BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD84u;
        // 0x31bd88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD8Cu;
        goto label_31bd8c;
    }
    ctx->pc = 0x31BD84u;
    SET_GPR_U32(ctx, 31, 0x31BD8Cu);
    ctx->pc = 0x31BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD84u;
    // 0x31bd88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31BD84u, 0x31BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD8Cu;
label_31bd8c:
    // 0x31bd8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_31bd90:
    if (ctx->pc == 0x31BD90u) {
        ctx->pc = 0x31BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD8Cu;
        // 0x31bd90: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD94u;
        goto label_31bd94;
    }
    ctx->pc = 0x31BD8Cu;
    {
        const bool branch_taken_0x31bd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bd8c) {
            ctx->pc = 0x31BD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BD8Cu;
            // 0x31bd90: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BD9Cu;
            goto label_31bd9c;
        }
    }
    ctx->pc = 0x31BD94u;
label_31bd94:
    // 0x31bd94: 0x1000000c  b           . + 4 + (0xC << 2)
label_31bd98:
    if (ctx->pc == 0x31BD98u) {
        ctx->pc = 0x31BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD94u;
        // 0x31bd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD9Cu;
        goto label_31bd9c;
    }
    ctx->pc = 0x31BD94u;
    {
        const bool branch_taken_0x31bd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD94u;
        // 0x31bd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd94) {
            ctx->pc = 0x31BDC8u;
            goto label_31bdc8;
        }
    }
    ctx->pc = 0x31BD9Cu;
label_31bd9c:
    // 0x31bd9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31bd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31bda0:
    // 0x31bda0: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x31bda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_31bda4:
    // 0x31bda4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x31bda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31bda8:
    // 0x31bda8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_31bdac:
    if (ctx->pc == 0x31BDACu) {
        ctx->pc = 0x31BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDA8u;
        // 0x31bdac: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDB0u;
        goto label_31bdb0;
    }
    ctx->pc = 0x31BDA8u;
    {
        const bool branch_taken_0x31bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDA8u;
        // 0x31bdac: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bda8) {
            ctx->pc = 0x31BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bd68;
        }
    }
    ctx->pc = 0x31BDB0u;
label_31bdb0:
    // 0x31bdb0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x31bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_31bdb4:
    // 0x31bdb4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31bdb8:
    // 0x31bdb8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x31bdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31bdbc:
    // 0x31bdbc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_31bdc0:
    if (ctx->pc == 0x31BDC0u) {
        ctx->pc = 0x31BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDBCu;
        // 0x31bdc0: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDC4u;
        goto label_31bdc4;
    }
    ctx->pc = 0x31BDBCu;
    {
        const bool branch_taken_0x31bdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDBCu;
        // 0x31bdc0: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdbc) {
            ctx->pc = 0x31BD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bd28;
        }
    }
    ctx->pc = 0x31BDC4u;
label_31bdc4:
    // 0x31bdc4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x31bdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31bdc8:
    // 0x31bdc8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31bdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31bdcc:
    // 0x31bdcc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31bdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31bdd0:
    // 0x31bdd0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31bdd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31bdd4:
    // 0x31bdd4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31bdd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31bdd8:
    // 0x31bdd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31bdd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31bddc:
    // 0x31bddc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31bddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31bde0:
    // 0x31bde0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31bde0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31bde4:
    // 0x31bde4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31bde4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31bde8:
    // 0x31bde8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31bde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31bdec:
    // 0x31bdec: 0x3e00008  jr          $ra
label_31bdf0:
    if (ctx->pc == 0x31BDF0u) {
        ctx->pc = 0x31BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDECu;
        // 0x31bdf0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDF4u;
        goto label_31bdf4;
    }
    ctx->pc = 0x31BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDECu;
        // 0x31bdf0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BDF4u;
label_31bdf4:
    // 0x31bdf4: 0x0  nop
    ctx->pc = 0x31bdf4u;
    // NOP
label_31bdf8:
    // 0x31bdf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31bdfc:
    // 0x31bdfc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31be00:
    // 0x31be00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31be04:
    // 0x31be04: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31be04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31be08:
    // 0x31be08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31be08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31be0c:
    // 0x31be0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31be0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_31be10:
    // 0x31be10: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x31be10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_31be14:
    // 0x31be14: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31be14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31be18:
    // 0x31be18: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x31be18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_31be1c:
    // 0x31be1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31be20:
    // 0x31be20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31be24:
    // 0x31be24: 0x40f809  jalr        $v0
label_31be28:
    if (ctx->pc == 0x31BE28u) {
        ctx->pc = 0x31BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE24u;
        // 0x31be28: 0x34a5001e  ori         $a1, $a1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE2Cu;
        goto label_31be2c;
    }
    ctx->pc = 0x31BE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BE2Cu);
        ctx->pc = 0x31BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE24u;
        // 0x31be28: 0x34a5001e  ori         $a1, $a1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE24u, 0x31BE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BE2Cu;
label_31be2c:
    // 0x31be2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31be2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31be30:
    // 0x31be30: 0x54c0000d  bnel        $a2, $zero, . + 4 + (0xD << 2)
label_31be34:
    if (ctx->pc == 0x31BE34u) {
        ctx->pc = 0x31BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE30u;
        // 0x31be34: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE38u;
        goto label_31be38;
    }
    ctx->pc = 0x31BE30u;
    {
        const bool branch_taken_0x31be30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31be30) {
            ctx->pc = 0x31BE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BE30u;
            // 0x31be34: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BE68u;
            goto label_31be68;
        }
    }
    ctx->pc = 0x31BE38u;
label_31be38:
    // 0x31be38: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31be3c:
    // 0x31be3c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31be40:
    // 0x31be40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31be40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31be44:
    // 0x31be44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31be44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31be48:
    // 0x31be48: 0xc1035f6  jal         func_40D7D8
label_31be4c:
    if (ctx->pc == 0x31BE4Cu) {
        ctx->pc = 0x31BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE48u;
        // 0x31be4c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE50u;
        goto label_31be50;
    }
    ctx->pc = 0x31BE48u;
    SET_GPR_U32(ctx, 31, 0x31BE50u);
    ctx->pc = 0x31BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE48u;
    // 0x31be4c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31BE48u, 0x31BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE50u;
label_31be50:
    // 0x31be50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31be50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31be54:
    // 0x31be54: 0xc103628  jal         func_40D8A0
label_31be58:
    if (ctx->pc == 0x31BE58u) {
        ctx->pc = 0x31BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE54u;
        // 0x31be58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE5Cu;
        goto label_31be5c;
    }
    ctx->pc = 0x31BE54u;
    SET_GPR_U32(ctx, 31, 0x31BE5Cu);
    ctx->pc = 0x31BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE54u;
    // 0x31be58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31BE54u, 0x31BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE5Cu;
label_31be5c:
    // 0x31be5c: 0x10000030  b           . + 4 + (0x30 << 2)
label_31be60:
    if (ctx->pc == 0x31BE60u) {
        ctx->pc = 0x31BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE5Cu;
        // 0x31be60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE64u;
        goto label_31be64;
    }
    ctx->pc = 0x31BE5Cu;
    {
        const bool branch_taken_0x31be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE5Cu;
        // 0x31be60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be5c) {
            ctx->pc = 0x31BF20u;
            goto label_31bf20;
        }
    }
    ctx->pc = 0x31BE64u;
label_31be64:
    // 0x31be64: 0x0  nop
    ctx->pc = 0x31be64u;
    // NOP
label_31be68:
    // 0x31be68: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x31be68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_31be6c:
    // 0x31be6c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x31be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_31be70:
    // 0x31be70: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_31be74:
    if (ctx->pc == 0x31BE74u) {
        ctx->pc = 0x31BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE70u;
        // 0x31be74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE78u;
        goto label_31be78;
    }
    ctx->pc = 0x31BE70u;
    {
        const bool branch_taken_0x31be70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE70u;
        // 0x31be74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be70) {
            ctx->pc = 0x31BF1Cu;
            goto label_31bf1c;
        }
    }
    ctx->pc = 0x31BE78u;
label_31be78:
    // 0x31be78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31be78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31be7c:
    // 0x31be7c: 0x32240003  andi        $a0, $s1, 0x3
    ctx->pc = 0x31be7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_31be80:
    // 0x31be80: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_31be84:
    if (ctx->pc == 0x31BE84u) {
        ctx->pc = 0x31BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE80u;
        // 0x31be84: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE88u;
        goto label_31be88;
    }
    ctx->pc = 0x31BE80u;
    {
        const bool branch_taken_0x31be80 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x31BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE80u;
        // 0x31be84: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be80) {
            ctx->pc = 0x31BEC8u;
            goto label_31bec8;
        }
    }
    ctx->pc = 0x31BE88u;
label_31be88:
    // 0x31be88: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_31be8c:
    if (ctx->pc == 0x31BE8Cu) {
        ctx->pc = 0x31BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE88u;
        // 0x31be8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE90u;
        goto label_31be90;
    }
    ctx->pc = 0x31BE88u;
    {
        const bool branch_taken_0x31be88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE88u;
        // 0x31be8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be88) {
            ctx->pc = 0x31BEE8u;
            goto label_31bee8;
        }
    }
    ctx->pc = 0x31BE90u;
label_31be90:
    // 0x31be90: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x31be90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_31be94:
    // 0x31be94: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_31be98:
    if (ctx->pc == 0x31BE98u) {
        ctx->pc = 0x31BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE94u;
        // 0x31be98: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE9Cu;
        goto label_31be9c;
    }
    ctx->pc = 0x31BE94u;
    {
        const bool branch_taken_0x31be94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31be94) {
            ctx->pc = 0x31BE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BE94u;
            // 0x31be98: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BECCu;
            goto label_31becc;
        }
    }
    ctx->pc = 0x31BE9Cu;
label_31be9c:
    // 0x31be9c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x31be9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_31bea0:
    // 0x31bea0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_31bea4:
    if (ctx->pc == 0x31BEA4u) {
        ctx->pc = 0x31BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEA0u;
        // 0x31bea4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BEA8u;
        goto label_31bea8;
    }
    ctx->pc = 0x31BEA0u;
    {
        const bool branch_taken_0x31bea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bea0) {
            ctx->pc = 0x31BEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BEA0u;
            // 0x31bea4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BEBCu;
            goto label_31bebc;
        }
    }
    ctx->pc = 0x31BEA8u;
label_31bea8:
    // 0x31bea8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x31bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_31beac:
    // 0x31beac: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x31beacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_31beb0:
    // 0x31beb0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x31beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_31beb4:
    // 0x31beb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31beb8:
    // 0x31beb8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31bebc:
    // 0x31bebc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31bec0:
    // 0x31bec0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31bec4:
    // 0x31bec4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_31bec8:
    // 0x31bec8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31becc:
    // 0x31becc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31beccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31bed0:
    // 0x31bed0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31bed4:
    // 0x31bed4: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x31bed4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_31bed8:
    // 0x31bed8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_31bedc:
    if (ctx->pc == 0x31BEDCu) {
        ctx->pc = 0x31BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BED8u;
        // 0x31bedc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BEE0u;
        goto label_31bee0;
    }
    ctx->pc = 0x31BED8u;
    {
        const bool branch_taken_0x31bed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BED8u;
        // 0x31bedc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bed8) {
            ctx->pc = 0x31BF1Cu;
            goto label_31bf1c;
        }
    }
    ctx->pc = 0x31BEE0u;
label_31bee0:
    // 0x31bee0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31bee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31bee4:
    // 0x31bee4: 0x0  nop
    ctx->pc = 0x31bee4u;
    // NOP
label_31bee8:
    // 0x31bee8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_31beec:
    // 0x31beec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x31beecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_31bef0:
    // 0x31bef0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_31bef4:
    // 0x31bef4: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x31bef4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_31bef8:
    // 0x31bef8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_31befc:
    // 0x31befc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31befcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_31bf00:
    // 0x31bf00: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x31bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_31bf04:
    // 0x31bf04: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x31bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_31bf08:
    // 0x31bf08: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x31bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_31bf0c:
    // 0x31bf0c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x31bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_31bf10:
    // 0x31bf10: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31bf14:
    // 0x31bf14: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_31bf18:
    if (ctx->pc == 0x31BF18u) {
        ctx->pc = 0x31BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF14u;
        // 0x31bf18: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF1Cu;
        goto label_31bf1c;
    }
    ctx->pc = 0x31BF14u;
    {
        const bool branch_taken_0x31bf14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF14u;
        // 0x31bf18: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf14) {
            ctx->pc = 0x31BEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bee8;
        }
    }
    ctx->pc = 0x31BF1Cu;
label_31bf1c:
    // 0x31bf1c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31bf1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31bf20:
    // 0x31bf20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31bf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31bf24:
    // 0x31bf24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31bf24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31bf28:
    // 0x31bf28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31bf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31bf2c:
    // 0x31bf2c: 0x3e00008  jr          $ra
label_31bf30:
    if (ctx->pc == 0x31BF30u) {
        ctx->pc = 0x31BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF2Cu;
        // 0x31bf30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF34u;
        goto label_31bf34;
    }
    ctx->pc = 0x31BF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF2Cu;
        // 0x31bf30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BF34u;
label_31bf34:
    // 0x31bf34: 0x0  nop
    ctx->pc = 0x31bf34u;
    // NOP
    ctx->pc = 0x31bf38u;
}
