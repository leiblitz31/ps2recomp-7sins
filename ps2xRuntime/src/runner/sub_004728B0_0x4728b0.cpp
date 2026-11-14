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

// Function: sub_004728B0
// Address: 0x4728b0 - 0x472bd0
void sub_004728B0_0x4728b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004728B0_0x4728b0");
#endif

    switch (ctx->pc) {
        case 0x4728b0u: goto label_4728b0;
        case 0x4728b4u: goto label_4728b4;
        case 0x4728b8u: goto label_4728b8;
        case 0x4728bcu: goto label_4728bc;
        case 0x4728c0u: goto label_4728c0;
        case 0x4728c4u: goto label_4728c4;
        case 0x4728c8u: goto label_4728c8;
        case 0x4728ccu: goto label_4728cc;
        case 0x4728d0u: goto label_4728d0;
        case 0x4728d4u: goto label_4728d4;
        case 0x4728d8u: goto label_4728d8;
        case 0x4728dcu: goto label_4728dc;
        case 0x4728e0u: goto label_4728e0;
        case 0x4728e4u: goto label_4728e4;
        case 0x4728e8u: goto label_4728e8;
        case 0x4728ecu: goto label_4728ec;
        case 0x4728f0u: goto label_4728f0;
        case 0x4728f4u: goto label_4728f4;
        case 0x4728f8u: goto label_4728f8;
        case 0x4728fcu: goto label_4728fc;
        case 0x472900u: goto label_472900;
        case 0x472904u: goto label_472904;
        case 0x472908u: goto label_472908;
        case 0x47290cu: goto label_47290c;
        case 0x472910u: goto label_472910;
        case 0x472914u: goto label_472914;
        case 0x472918u: goto label_472918;
        case 0x47291cu: goto label_47291c;
        case 0x472920u: goto label_472920;
        case 0x472924u: goto label_472924;
        case 0x472928u: goto label_472928;
        case 0x47292cu: goto label_47292c;
        case 0x472930u: goto label_472930;
        case 0x472934u: goto label_472934;
        case 0x472938u: goto label_472938;
        case 0x47293cu: goto label_47293c;
        case 0x472940u: goto label_472940;
        case 0x472944u: goto label_472944;
        case 0x472948u: goto label_472948;
        case 0x47294cu: goto label_47294c;
        case 0x472950u: goto label_472950;
        case 0x472954u: goto label_472954;
        case 0x472958u: goto label_472958;
        case 0x47295cu: goto label_47295c;
        case 0x472960u: goto label_472960;
        case 0x472964u: goto label_472964;
        case 0x472968u: goto label_472968;
        case 0x47296cu: goto label_47296c;
        case 0x472970u: goto label_472970;
        case 0x472974u: goto label_472974;
        case 0x472978u: goto label_472978;
        case 0x47297cu: goto label_47297c;
        case 0x472980u: goto label_472980;
        case 0x472984u: goto label_472984;
        case 0x472988u: goto label_472988;
        case 0x47298cu: goto label_47298c;
        case 0x472990u: goto label_472990;
        case 0x472994u: goto label_472994;
        case 0x472998u: goto label_472998;
        case 0x47299cu: goto label_47299c;
        case 0x4729a0u: goto label_4729a0;
        case 0x4729a4u: goto label_4729a4;
        case 0x4729a8u: goto label_4729a8;
        case 0x4729acu: goto label_4729ac;
        case 0x4729b0u: goto label_4729b0;
        case 0x4729b4u: goto label_4729b4;
        case 0x4729b8u: goto label_4729b8;
        case 0x4729bcu: goto label_4729bc;
        case 0x4729c0u: goto label_4729c0;
        case 0x4729c4u: goto label_4729c4;
        case 0x4729c8u: goto label_4729c8;
        case 0x4729ccu: goto label_4729cc;
        case 0x4729d0u: goto label_4729d0;
        case 0x4729d4u: goto label_4729d4;
        case 0x4729d8u: goto label_4729d8;
        case 0x4729dcu: goto label_4729dc;
        case 0x4729e0u: goto label_4729e0;
        case 0x4729e4u: goto label_4729e4;
        case 0x4729e8u: goto label_4729e8;
        case 0x4729ecu: goto label_4729ec;
        case 0x4729f0u: goto label_4729f0;
        case 0x4729f4u: goto label_4729f4;
        case 0x4729f8u: goto label_4729f8;
        case 0x4729fcu: goto label_4729fc;
        case 0x472a00u: goto label_472a00;
        case 0x472a04u: goto label_472a04;
        case 0x472a08u: goto label_472a08;
        case 0x472a0cu: goto label_472a0c;
        case 0x472a10u: goto label_472a10;
        case 0x472a14u: goto label_472a14;
        case 0x472a18u: goto label_472a18;
        case 0x472a1cu: goto label_472a1c;
        case 0x472a20u: goto label_472a20;
        case 0x472a24u: goto label_472a24;
        case 0x472a28u: goto label_472a28;
        case 0x472a2cu: goto label_472a2c;
        case 0x472a30u: goto label_472a30;
        case 0x472a34u: goto label_472a34;
        case 0x472a38u: goto label_472a38;
        case 0x472a3cu: goto label_472a3c;
        case 0x472a40u: goto label_472a40;
        case 0x472a44u: goto label_472a44;
        case 0x472a48u: goto label_472a48;
        case 0x472a4cu: goto label_472a4c;
        case 0x472a50u: goto label_472a50;
        case 0x472a54u: goto label_472a54;
        case 0x472a58u: goto label_472a58;
        case 0x472a5cu: goto label_472a5c;
        case 0x472a60u: goto label_472a60;
        case 0x472a64u: goto label_472a64;
        case 0x472a68u: goto label_472a68;
        case 0x472a6cu: goto label_472a6c;
        case 0x472a70u: goto label_472a70;
        case 0x472a74u: goto label_472a74;
        case 0x472a78u: goto label_472a78;
        case 0x472a7cu: goto label_472a7c;
        case 0x472a80u: goto label_472a80;
        case 0x472a84u: goto label_472a84;
        case 0x472a88u: goto label_472a88;
        case 0x472a8cu: goto label_472a8c;
        case 0x472a90u: goto label_472a90;
        case 0x472a94u: goto label_472a94;
        case 0x472a98u: goto label_472a98;
        case 0x472a9cu: goto label_472a9c;
        case 0x472aa0u: goto label_472aa0;
        case 0x472aa4u: goto label_472aa4;
        case 0x472aa8u: goto label_472aa8;
        case 0x472aacu: goto label_472aac;
        case 0x472ab0u: goto label_472ab0;
        case 0x472ab4u: goto label_472ab4;
        case 0x472ab8u: goto label_472ab8;
        case 0x472abcu: goto label_472abc;
        case 0x472ac0u: goto label_472ac0;
        case 0x472ac4u: goto label_472ac4;
        case 0x472ac8u: goto label_472ac8;
        case 0x472accu: goto label_472acc;
        case 0x472ad0u: goto label_472ad0;
        case 0x472ad4u: goto label_472ad4;
        case 0x472ad8u: goto label_472ad8;
        case 0x472adcu: goto label_472adc;
        case 0x472ae0u: goto label_472ae0;
        case 0x472ae4u: goto label_472ae4;
        case 0x472ae8u: goto label_472ae8;
        case 0x472aecu: goto label_472aec;
        case 0x472af0u: goto label_472af0;
        case 0x472af4u: goto label_472af4;
        case 0x472af8u: goto label_472af8;
        case 0x472afcu: goto label_472afc;
        case 0x472b00u: goto label_472b00;
        case 0x472b04u: goto label_472b04;
        case 0x472b08u: goto label_472b08;
        case 0x472b0cu: goto label_472b0c;
        case 0x472b10u: goto label_472b10;
        case 0x472b14u: goto label_472b14;
        case 0x472b18u: goto label_472b18;
        case 0x472b1cu: goto label_472b1c;
        case 0x472b20u: goto label_472b20;
        case 0x472b24u: goto label_472b24;
        case 0x472b28u: goto label_472b28;
        case 0x472b2cu: goto label_472b2c;
        case 0x472b30u: goto label_472b30;
        case 0x472b34u: goto label_472b34;
        case 0x472b38u: goto label_472b38;
        case 0x472b3cu: goto label_472b3c;
        case 0x472b40u: goto label_472b40;
        case 0x472b44u: goto label_472b44;
        case 0x472b48u: goto label_472b48;
        case 0x472b4cu: goto label_472b4c;
        case 0x472b50u: goto label_472b50;
        case 0x472b54u: goto label_472b54;
        case 0x472b58u: goto label_472b58;
        case 0x472b5cu: goto label_472b5c;
        case 0x472b60u: goto label_472b60;
        case 0x472b64u: goto label_472b64;
        case 0x472b68u: goto label_472b68;
        case 0x472b6cu: goto label_472b6c;
        case 0x472b70u: goto label_472b70;
        case 0x472b74u: goto label_472b74;
        case 0x472b78u: goto label_472b78;
        case 0x472b7cu: goto label_472b7c;
        case 0x472b80u: goto label_472b80;
        case 0x472b84u: goto label_472b84;
        case 0x472b88u: goto label_472b88;
        case 0x472b8cu: goto label_472b8c;
        case 0x472b90u: goto label_472b90;
        case 0x472b94u: goto label_472b94;
        case 0x472b98u: goto label_472b98;
        case 0x472b9cu: goto label_472b9c;
        case 0x472ba0u: goto label_472ba0;
        case 0x472ba4u: goto label_472ba4;
        case 0x472ba8u: goto label_472ba8;
        case 0x472bacu: goto label_472bac;
        case 0x472bb0u: goto label_472bb0;
        case 0x472bb4u: goto label_472bb4;
        case 0x472bb8u: goto label_472bb8;
        case 0x472bbcu: goto label_472bbc;
        case 0x472bc0u: goto label_472bc0;
        case 0x472bc4u: goto label_472bc4;
        case 0x472bc8u: goto label_472bc8;
        case 0x472bccu: goto label_472bcc;
        default: break;
    }

    ctx->pc = 0x4728b0u;

label_4728b0:
    // 0x4728b0: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x4728b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
label_4728b4:
    // 0x4728b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4728b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4728b8:
    // 0x4728b8: 0xafa403a0  sw          $a0, 0x3A0($sp)
    ctx->pc = 0x4728b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 4));
label_4728bc:
    // 0x4728bc: 0xafa503b0  sw          $a1, 0x3B0($sp)
    ctx->pc = 0x4728bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 5));
label_4728c0:
    // 0x4728c0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4728c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4728c4:
    // 0x4728c4: 0x24636d30  addiu       $v1, $v1, 0x6D30
    ctx->pc = 0x4728c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27952));
label_4728c8:
    // 0x4728c8: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x4728c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4728cc:
    // 0x4728cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4728ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4728d0:
    // 0x4728d0: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x4728d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_4728d4:
    // 0x4728d4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x4728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4728d8:
    // 0x4728d8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4728d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4728dc:
    // 0x4728dc: 0x8fa203b0  lw          $v0, 0x3B0($sp)
    ctx->pc = 0x4728dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_4728e0:
    // 0x4728e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4728e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4728e4:
    // 0x4728e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4728e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4728e8:
    // 0x4728e8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4728ec:
    if (ctx->pc == 0x4728ECu) {
        ctx->pc = 0x4728F0u;
        goto label_4728f0;
    }
    ctx->pc = 0x4728E8u;
    {
        const bool branch_taken_0x4728e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4728e8) {
            ctx->pc = 0x472998u;
            goto label_472998;
        }
    }
    ctx->pc = 0x4728F0u;
label_4728f0:
    // 0x4728f0: 0x8f82b3b0  lw          $v0, -0x4C50($gp)
    ctx->pc = 0x4728f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947760)));
label_4728f4:
    // 0x4728f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4728f8:
    if (ctx->pc == 0x4728F8u) {
        ctx->pc = 0x4728FCu;
        goto label_4728fc;
    }
    ctx->pc = 0x4728F4u;
    {
        const bool branch_taken_0x4728f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4728f4) {
            ctx->pc = 0x472998u;
            goto label_472998;
        }
    }
    ctx->pc = 0x4728FCu;
label_4728fc:
    // 0x4728fc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4728fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_472900:
    // 0x472900: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472904:
    // 0x472904: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x472904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_472908:
    // 0x472908: 0xc115ee8  jal         func_457BA0
label_47290c:
    if (ctx->pc == 0x47290Cu) {
        ctx->pc = 0x472910u;
        goto label_472910;
    }
    ctx->pc = 0x472908u;
    SET_GPR_U32(ctx, 31, 0x472910u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x472908u, 0x472910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472910u;
label_472910:
    // 0x472910: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_472914:
    if (ctx->pc == 0x472914u) {
        ctx->pc = 0x472918u;
        goto label_472918;
    }
    ctx->pc = 0x472910u;
    {
        const bool branch_taken_0x472910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472910) {
            ctx->pc = 0x472998u;
            goto label_472998;
        }
    }
    ctx->pc = 0x472918u;
label_472918:
    // 0x472918: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x472918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_47291c:
    // 0x47291c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_472920:
    if (ctx->pc == 0x472920u) {
        ctx->pc = 0x472924u;
        goto label_472924;
    }
    ctx->pc = 0x47291Cu;
    {
        const bool branch_taken_0x47291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47291c) {
            ctx->pc = 0x472998u;
            goto label_472998;
        }
    }
    ctx->pc = 0x472924u;
label_472924:
    // 0x472924: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472928:
    // 0x472928: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47292c:
    // 0x47292c: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x47292cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_472930:
    // 0x472930: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x472930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_472934:
    // 0x472934: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x472934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_472938:
    // 0x472938: 0x24080033  addiu       $t0, $zero, 0x33
    ctx->pc = 0x472938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_47293c:
    // 0x47293c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47293cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_472940:
    // 0x472940: 0x252902e0  addiu       $t1, $t1, 0x2E0
    ctx->pc = 0x472940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 736));
label_472944:
    // 0x472944: 0xc113940  jal         func_44E500
label_472948:
    if (ctx->pc == 0x472948u) {
        ctx->pc = 0x47294Cu;
        goto label_47294c;
    }
    ctx->pc = 0x472944u;
    SET_GPR_U32(ctx, 31, 0x47294Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x472944u, 0x47294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47294Cu;
label_47294c:
    // 0x47294c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x47294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472950:
    // 0x472950: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x472950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_472954:
    // 0x472954: 0x24a50300  addiu       $a1, $a1, 0x300
    ctx->pc = 0x472954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
label_472958:
    // 0x472958: 0xc115c24  jal         func_457090
label_47295c:
    if (ctx->pc == 0x47295Cu) {
        ctx->pc = 0x472960u;
        goto label_472960;
    }
    ctx->pc = 0x472958u;
    SET_GPR_U32(ctx, 31, 0x472960u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472958u, 0x472960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472960u;
label_472960:
    // 0x472960: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472964:
    // 0x472964: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x472964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_472968:
    // 0x472968: 0x40f809  jalr        $v0
label_47296c:
    if (ctx->pc == 0x47296Cu) {
        ctx->pc = 0x472970u;
        goto label_472970;
    }
    ctx->pc = 0x472968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472970u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472968u, 0x472970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472970u;
label_472970:
    // 0x472970: 0xaf82b3b0  sw          $v0, -0x4C50($gp)
    ctx->pc = 0x472970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947760), GPR_U32(ctx, 2));
label_472974:
    // 0x472974: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x472974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_472978:
    // 0x472978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47297c:
    if (ctx->pc == 0x47297Cu) {
        ctx->pc = 0x472980u;
        goto label_472980;
    }
    ctx->pc = 0x472978u;
    {
        const bool branch_taken_0x472978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472978) {
            ctx->pc = 0x472988u;
            goto label_472988;
        }
    }
    ctx->pc = 0x472980u;
label_472980:
    // 0x472980: 0xd  break       0
    ctx->pc = 0x472980u;
    runtime->handleBreak(rdram, ctx);
label_472984:
    // 0x472984: 0x0  nop
    ctx->pc = 0x472984u;
    // NOP
label_472988:
    // 0x472988: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_47298c:
    // 0x47298c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472990:
    // 0x472990: 0xc11392c  jal         func_44E4B0
label_472994:
    if (ctx->pc == 0x472994u) {
        ctx->pc = 0x472998u;
        goto label_472998;
    }
    ctx->pc = 0x472990u;
    SET_GPR_U32(ctx, 31, 0x472998u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472990u, 0x472998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472998u;
label_472998:
    // 0x472998: 0xc11c1fc  jal         func_4707F0
label_47299c:
    if (ctx->pc == 0x47299Cu) {
        ctx->pc = 0x4729A0u;
        goto label_4729a0;
    }
    ctx->pc = 0x472998u;
    SET_GPR_U32(ctx, 31, 0x4729A0u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x472998u, 0x4729A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4729A0u;
label_4729a0:
    // 0x4729a0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4729a4:
    if (ctx->pc == 0x4729A4u) {
        ctx->pc = 0x4729A8u;
        goto label_4729a8;
    }
    ctx->pc = 0x4729A0u;
    {
        const bool branch_taken_0x4729a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4729a0) {
            ctx->pc = 0x472A50u;
            goto label_472a50;
        }
    }
    ctx->pc = 0x4729A8u;
label_4729a8:
    // 0x4729a8: 0x8f82b3b4  lw          $v0, -0x4C4C($gp)
    ctx->pc = 0x4729a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947764)));
label_4729ac:
    // 0x4729ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4729b0:
    if (ctx->pc == 0x4729B0u) {
        ctx->pc = 0x4729B4u;
        goto label_4729b4;
    }
    ctx->pc = 0x4729ACu;
    {
        const bool branch_taken_0x4729ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4729ac) {
            ctx->pc = 0x472A50u;
            goto label_472a50;
        }
    }
    ctx->pc = 0x4729B4u;
label_4729b4:
    // 0x4729b4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4729b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4729b8:
    // 0x4729b8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4729b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4729bc:
    // 0x4729bc: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x4729bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_4729c0:
    // 0x4729c0: 0xc115ee8  jal         func_457BA0
label_4729c4:
    if (ctx->pc == 0x4729C4u) {
        ctx->pc = 0x4729C8u;
        goto label_4729c8;
    }
    ctx->pc = 0x4729C0u;
    SET_GPR_U32(ctx, 31, 0x4729C8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4729C0u, 0x4729C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4729C8u;
label_4729c8:
    // 0x4729c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4729cc:
    if (ctx->pc == 0x4729CCu) {
        ctx->pc = 0x4729D0u;
        goto label_4729d0;
    }
    ctx->pc = 0x4729C8u;
    {
        const bool branch_taken_0x4729c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4729c8) {
            ctx->pc = 0x472A50u;
            goto label_472a50;
        }
    }
    ctx->pc = 0x4729D0u;
label_4729d0:
    // 0x4729d0: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x4729d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_4729d4:
    // 0x4729d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4729d8:
    if (ctx->pc == 0x4729D8u) {
        ctx->pc = 0x4729DCu;
        goto label_4729dc;
    }
    ctx->pc = 0x4729D4u;
    {
        const bool branch_taken_0x4729d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4729d4) {
            ctx->pc = 0x472A50u;
            goto label_472a50;
        }
    }
    ctx->pc = 0x4729DCu;
label_4729dc:
    // 0x4729dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4729dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4729e0:
    // 0x4729e0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4729e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4729e4:
    // 0x4729e4: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x4729e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_4729e8:
    // 0x4729e8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4729e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4729ec:
    // 0x4729ec: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4729ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4729f0:
    // 0x4729f0: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x4729f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4729f4:
    // 0x4729f4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4729f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4729f8:
    // 0x4729f8: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x4729f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_4729fc:
    // 0x4729fc: 0xc113940  jal         func_44E500
label_472a00:
    if (ctx->pc == 0x472A00u) {
        ctx->pc = 0x472A04u;
        goto label_472a04;
    }
    ctx->pc = 0x4729FCu;
    SET_GPR_U32(ctx, 31, 0x472A04u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4729FCu, 0x472A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A04u;
label_472a04:
    // 0x472a04: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472a08:
    // 0x472a08: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x472a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_472a0c:
    // 0x472a0c: 0x24a50360  addiu       $a1, $a1, 0x360
    ctx->pc = 0x472a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
label_472a10:
    // 0x472a10: 0xc115c24  jal         func_457090
label_472a14:
    if (ctx->pc == 0x472A14u) {
        ctx->pc = 0x472A18u;
        goto label_472a18;
    }
    ctx->pc = 0x472A10u;
    SET_GPR_U32(ctx, 31, 0x472A18u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472A10u, 0x472A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A18u;
label_472a18:
    // 0x472a18: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472a1c:
    // 0x472a1c: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x472a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_472a20:
    // 0x472a20: 0x40f809  jalr        $v0
label_472a24:
    if (ctx->pc == 0x472A24u) {
        ctx->pc = 0x472A28u;
        goto label_472a28;
    }
    ctx->pc = 0x472A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472A28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472A20u, 0x472A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472A28u;
label_472a28:
    // 0x472a28: 0xaf82b3b4  sw          $v0, -0x4C4C($gp)
    ctx->pc = 0x472a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947764), GPR_U32(ctx, 2));
label_472a2c:
    // 0x472a2c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x472a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_472a30:
    // 0x472a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472a34:
    if (ctx->pc == 0x472A34u) {
        ctx->pc = 0x472A38u;
        goto label_472a38;
    }
    ctx->pc = 0x472A30u;
    {
        const bool branch_taken_0x472a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472a30) {
            ctx->pc = 0x472A40u;
            goto label_472a40;
        }
    }
    ctx->pc = 0x472A38u;
label_472a38:
    // 0x472a38: 0xd  break       0
    ctx->pc = 0x472a38u;
    runtime->handleBreak(rdram, ctx);
label_472a3c:
    // 0x472a3c: 0x0  nop
    ctx->pc = 0x472a3cu;
    // NOP
label_472a40:
    // 0x472a40: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472a44:
    // 0x472a44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472a48:
    // 0x472a48: 0xc11392c  jal         func_44E4B0
label_472a4c:
    if (ctx->pc == 0x472A4Cu) {
        ctx->pc = 0x472A50u;
        goto label_472a50;
    }
    ctx->pc = 0x472A48u;
    SET_GPR_U32(ctx, 31, 0x472A50u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472A48u, 0x472A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472A50u;
label_472a50:
    // 0x472a50: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a54:
    // 0x472a54: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x472a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_472a58:
    // 0x472a58: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a5c:
    // 0x472a5c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x472a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_472a60:
    // 0x472a60: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a64:
    // 0x472a64: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x472a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_472a68:
    // 0x472a68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x472a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_472a6c:
    // 0x472a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x472a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472a70:
    // 0x472a70: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a74:
    // 0x472a74: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x472a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_472a78:
    // 0x472a78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x472a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472a7c:
    // 0x472a7c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a80:
    // 0x472a80: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x472a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_472a84:
    // 0x472a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x472a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472a88:
    // 0x472a88: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a8c:
    // 0x472a8c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x472a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_472a90:
    // 0x472a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x472a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472a94:
    // 0x472a94: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472a98:
    // 0x472a98: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x472a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_472a9c:
    // 0x472a9c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472aa0:
    // 0x472aa0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x472aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_472aa4:
    // 0x472aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x472aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472aa8:
    // 0x472aa8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_472aac:
    if (ctx->pc == 0x472AACu) {
        ctx->pc = 0x472AB0u;
        goto label_472ab0;
    }
    ctx->pc = 0x472AA8u;
    {
        const bool branch_taken_0x472aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x472aa8) {
            ctx->pc = 0x472AD8u;
            goto label_472ad8;
        }
    }
    ctx->pc = 0x472AB0u;
label_472ab0:
    // 0x472ab0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_472ab4:
    if (ctx->pc == 0x472AB4u) {
        ctx->pc = 0x472AB8u;
        goto label_472ab8;
    }
    ctx->pc = 0x472AB0u;
    {
        const bool branch_taken_0x472ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472ab0) {
            ctx->pc = 0x472AC0u;
            goto label_472ac0;
        }
    }
    ctx->pc = 0x472AB8u;
label_472ab8:
    // 0x472ab8: 0x1000000a  b           . + 4 + (0xA << 2)
label_472abc:
    if (ctx->pc == 0x472ABCu) {
        ctx->pc = 0x472AC0u;
        goto label_472ac0;
    }
    ctx->pc = 0x472AB8u;
    {
        const bool branch_taken_0x472ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472ab8) {
            ctx->pc = 0x472AE4u;
            goto label_472ae4;
        }
    }
    ctx->pc = 0x472AC0u;
label_472ac0:
    // 0x472ac0: 0xc0ee592  jal         func_3B9648
label_472ac4:
    if (ctx->pc == 0x472AC4u) {
        ctx->pc = 0x472AC8u;
        goto label_472ac8;
    }
    ctx->pc = 0x472AC0u;
    SET_GPR_U32(ctx, 31, 0x472AC8u);
    ctx->pc = 0x3B9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9648u, 0x472AC0u, 0x472AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472AC8u;
label_472ac8:
    // 0x472ac8: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x472ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472acc:
    // 0x472acc: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x472accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_472ad0:
    // 0x472ad0: 0x10000007  b           . + 4 + (0x7 << 2)
label_472ad4:
    if (ctx->pc == 0x472AD4u) {
        ctx->pc = 0x472AD8u;
        goto label_472ad8;
    }
    ctx->pc = 0x472AD0u;
    {
        const bool branch_taken_0x472ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472ad0) {
            ctx->pc = 0x472AF0u;
            goto label_472af0;
        }
    }
    ctx->pc = 0x472AD8u;
label_472ad8:
    // 0x472ad8: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472adc:
    // 0x472adc: 0x10000035  b           . + 4 + (0x35 << 2)
label_472ae0:
    if (ctx->pc == 0x472AE0u) {
        ctx->pc = 0x472AE4u;
        goto label_472ae4;
    }
    ctx->pc = 0x472ADCu;
    {
        const bool branch_taken_0x472adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472adc) {
            ctx->pc = 0x472BB4u;
            goto label_472bb4;
        }
    }
    ctx->pc = 0x472AE4u;
label_472ae4:
    // 0x472ae4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472ae8:
    // 0x472ae8: 0x10000032  b           . + 4 + (0x32 << 2)
label_472aec:
    if (ctx->pc == 0x472AECu) {
        ctx->pc = 0x472AF0u;
        goto label_472af0;
    }
    ctx->pc = 0x472AE8u;
    {
        const bool branch_taken_0x472ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472ae8) {
            ctx->pc = 0x472BB4u;
            goto label_472bb4;
        }
    }
    ctx->pc = 0x472AF0u;
label_472af0:
    // 0x472af0: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472af4:
    // 0x472af4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x472af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_472af8:
    // 0x472af8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x472af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_472afc:
    // 0x472afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x472afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_472b00:
    // 0x472b00: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_472b04:
    if (ctx->pc == 0x472B04u) {
        ctx->pc = 0x472B08u;
        goto label_472b08;
    }
    ctx->pc = 0x472B00u;
    {
        const bool branch_taken_0x472b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472b00) {
            ctx->pc = 0x472BB0u;
            goto label_472bb0;
        }
    }
    ctx->pc = 0x472B08u;
label_472b08:
    // 0x472b08: 0x8f82b3b8  lw          $v0, -0x4C48($gp)
    ctx->pc = 0x472b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947768)));
label_472b0c:
    // 0x472b0c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_472b10:
    if (ctx->pc == 0x472B10u) {
        ctx->pc = 0x472B14u;
        goto label_472b14;
    }
    ctx->pc = 0x472B0Cu;
    {
        const bool branch_taken_0x472b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472b0c) {
            ctx->pc = 0x472BB0u;
            goto label_472bb0;
        }
    }
    ctx->pc = 0x472B14u;
label_472b14:
    // 0x472b14: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x472b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_472b18:
    // 0x472b18: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472b1c:
    // 0x472b1c: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x472b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_472b20:
    // 0x472b20: 0xc115ee8  jal         func_457BA0
label_472b24:
    if (ctx->pc == 0x472B24u) {
        ctx->pc = 0x472B28u;
        goto label_472b28;
    }
    ctx->pc = 0x472B20u;
    SET_GPR_U32(ctx, 31, 0x472B28u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x472B20u, 0x472B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B28u;
label_472b28:
    // 0x472b28: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_472b2c:
    if (ctx->pc == 0x472B2Cu) {
        ctx->pc = 0x472B30u;
        goto label_472b30;
    }
    ctx->pc = 0x472B28u;
    {
        const bool branch_taken_0x472b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472b28) {
            ctx->pc = 0x472BB0u;
            goto label_472bb0;
        }
    }
    ctx->pc = 0x472B30u;
label_472b30:
    // 0x472b30: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x472b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_472b34:
    // 0x472b34: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_472b38:
    if (ctx->pc == 0x472B38u) {
        ctx->pc = 0x472B3Cu;
        goto label_472b3c;
    }
    ctx->pc = 0x472B34u;
    {
        const bool branch_taken_0x472b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472b34) {
            ctx->pc = 0x472BB0u;
            goto label_472bb0;
        }
    }
    ctx->pc = 0x472B3Cu;
label_472b3c:
    // 0x472b3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472b40:
    // 0x472b40: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472b44:
    // 0x472b44: 0x8fa60374  lw          $a2, 0x374($sp)
    ctx->pc = 0x472b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_472b48:
    // 0x472b48: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x472b48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_472b4c:
    // 0x472b4c: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x472b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_472b50:
    // 0x472b50: 0x24080051  addiu       $t0, $zero, 0x51
    ctx->pc = 0x472b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_472b54:
    // 0x472b54: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x472b54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_472b58:
    // 0x472b58: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x472b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_472b5c:
    // 0x472b5c: 0xc113940  jal         func_44E500
label_472b60:
    if (ctx->pc == 0x472B60u) {
        ctx->pc = 0x472B64u;
        goto label_472b64;
    }
    ctx->pc = 0x472B5Cu;
    SET_GPR_U32(ctx, 31, 0x472B64u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x472B5Cu, 0x472B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B64u;
label_472b64:
    // 0x472b64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472b68:
    // 0x472b68: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x472b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_472b6c:
    // 0x472b6c: 0x24a503e0  addiu       $a1, $a1, 0x3E0
    ctx->pc = 0x472b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 992));
label_472b70:
    // 0x472b70: 0xc115c24  jal         func_457090
label_472b74:
    if (ctx->pc == 0x472B74u) {
        ctx->pc = 0x472B78u;
        goto label_472b78;
    }
    ctx->pc = 0x472B70u;
    SET_GPR_U32(ctx, 31, 0x472B78u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472B70u, 0x472B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472B78u;
label_472b78:
    // 0x472b78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472b7c:
    // 0x472b7c: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x472b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_472b80:
    // 0x472b80: 0x40f809  jalr        $v0
label_472b84:
    if (ctx->pc == 0x472B84u) {
        ctx->pc = 0x472B88u;
        goto label_472b88;
    }
    ctx->pc = 0x472B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472B88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472B80u, 0x472B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472B88u;
label_472b88:
    // 0x472b88: 0xaf82b3b8  sw          $v0, -0x4C48($gp)
    ctx->pc = 0x472b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947768), GPR_U32(ctx, 2));
label_472b8c:
    // 0x472b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x472b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_472b90:
    // 0x472b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472b94:
    if (ctx->pc == 0x472B94u) {
        ctx->pc = 0x472B98u;
        goto label_472b98;
    }
    ctx->pc = 0x472B90u;
    {
        const bool branch_taken_0x472b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472b90) {
            ctx->pc = 0x472BA0u;
            goto label_472ba0;
        }
    }
    ctx->pc = 0x472B98u;
label_472b98:
    // 0x472b98: 0xd  break       0
    ctx->pc = 0x472b98u;
    runtime->handleBreak(rdram, ctx);
label_472b9c:
    // 0x472b9c: 0x0  nop
    ctx->pc = 0x472b9cu;
    // NOP
label_472ba0:
    // 0x472ba0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472ba4:
    // 0x472ba4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472ba8:
    // 0x472ba8: 0xc11392c  jal         func_44E4B0
label_472bac:
    if (ctx->pc == 0x472BACu) {
        ctx->pc = 0x472BB0u;
        goto label_472bb0;
    }
    ctx->pc = 0x472BA8u;
    SET_GPR_U32(ctx, 31, 0x472BB0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472BA8u, 0x472BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472BB0u;
label_472bb0:
    // 0x472bb0: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x472bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472bb4:
    // 0x472bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_472bb8:
    // 0x472bb8: 0x27bd03c0  addiu       $sp, $sp, 0x3C0
    ctx->pc = 0x472bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_472bbc:
    // 0x472bbc: 0x3e00008  jr          $ra
label_472bc0:
    if (ctx->pc == 0x472BC0u) {
        ctx->pc = 0x472BC4u;
        goto label_472bc4;
    }
    ctx->pc = 0x472BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472BC4u;
label_472bc4:
    // 0x472bc4: 0x0  nop
    ctx->pc = 0x472bc4u;
    // NOP
label_472bc8:
    // 0x472bc8: 0x0  nop
    ctx->pc = 0x472bc8u;
    // NOP
label_472bcc:
    // 0x472bcc: 0x0  nop
    ctx->pc = 0x472bccu;
    // NOP
    ctx->pc = 0x472bd0u;
}
