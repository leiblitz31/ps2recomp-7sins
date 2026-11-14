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

// Function: sub_00311818
// Address: 0x311818 - 0x311c40
void sub_00311818_0x311818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311818_0x311818");
#endif

    switch (ctx->pc) {
        case 0x311818u: goto label_311818;
        case 0x31181cu: goto label_31181c;
        case 0x311820u: goto label_311820;
        case 0x311824u: goto label_311824;
        case 0x311828u: goto label_311828;
        case 0x31182cu: goto label_31182c;
        case 0x311830u: goto label_311830;
        case 0x311834u: goto label_311834;
        case 0x311838u: goto label_311838;
        case 0x31183cu: goto label_31183c;
        case 0x311840u: goto label_311840;
        case 0x311844u: goto label_311844;
        case 0x311848u: goto label_311848;
        case 0x31184cu: goto label_31184c;
        case 0x311850u: goto label_311850;
        case 0x311854u: goto label_311854;
        case 0x311858u: goto label_311858;
        case 0x31185cu: goto label_31185c;
        case 0x311860u: goto label_311860;
        case 0x311864u: goto label_311864;
        case 0x311868u: goto label_311868;
        case 0x31186cu: goto label_31186c;
        case 0x311870u: goto label_311870;
        case 0x311874u: goto label_311874;
        case 0x311878u: goto label_311878;
        case 0x31187cu: goto label_31187c;
        case 0x311880u: goto label_311880;
        case 0x311884u: goto label_311884;
        case 0x311888u: goto label_311888;
        case 0x31188cu: goto label_31188c;
        case 0x311890u: goto label_311890;
        case 0x311894u: goto label_311894;
        case 0x311898u: goto label_311898;
        case 0x31189cu: goto label_31189c;
        case 0x3118a0u: goto label_3118a0;
        case 0x3118a4u: goto label_3118a4;
        case 0x3118a8u: goto label_3118a8;
        case 0x3118acu: goto label_3118ac;
        case 0x3118b0u: goto label_3118b0;
        case 0x3118b4u: goto label_3118b4;
        case 0x3118b8u: goto label_3118b8;
        case 0x3118bcu: goto label_3118bc;
        case 0x3118c0u: goto label_3118c0;
        case 0x3118c4u: goto label_3118c4;
        case 0x3118c8u: goto label_3118c8;
        case 0x3118ccu: goto label_3118cc;
        case 0x3118d0u: goto label_3118d0;
        case 0x3118d4u: goto label_3118d4;
        case 0x3118d8u: goto label_3118d8;
        case 0x3118dcu: goto label_3118dc;
        case 0x3118e0u: goto label_3118e0;
        case 0x3118e4u: goto label_3118e4;
        case 0x3118e8u: goto label_3118e8;
        case 0x3118ecu: goto label_3118ec;
        case 0x3118f0u: goto label_3118f0;
        case 0x3118f4u: goto label_3118f4;
        case 0x3118f8u: goto label_3118f8;
        case 0x3118fcu: goto label_3118fc;
        case 0x311900u: goto label_311900;
        case 0x311904u: goto label_311904;
        case 0x311908u: goto label_311908;
        case 0x31190cu: goto label_31190c;
        case 0x311910u: goto label_311910;
        case 0x311914u: goto label_311914;
        case 0x311918u: goto label_311918;
        case 0x31191cu: goto label_31191c;
        case 0x311920u: goto label_311920;
        case 0x311924u: goto label_311924;
        case 0x311928u: goto label_311928;
        case 0x31192cu: goto label_31192c;
        case 0x311930u: goto label_311930;
        case 0x311934u: goto label_311934;
        case 0x311938u: goto label_311938;
        case 0x31193cu: goto label_31193c;
        case 0x311940u: goto label_311940;
        case 0x311944u: goto label_311944;
        case 0x311948u: goto label_311948;
        case 0x31194cu: goto label_31194c;
        case 0x311950u: goto label_311950;
        case 0x311954u: goto label_311954;
        case 0x311958u: goto label_311958;
        case 0x31195cu: goto label_31195c;
        case 0x311960u: goto label_311960;
        case 0x311964u: goto label_311964;
        case 0x311968u: goto label_311968;
        case 0x31196cu: goto label_31196c;
        case 0x311970u: goto label_311970;
        case 0x311974u: goto label_311974;
        case 0x311978u: goto label_311978;
        case 0x31197cu: goto label_31197c;
        case 0x311980u: goto label_311980;
        case 0x311984u: goto label_311984;
        case 0x311988u: goto label_311988;
        case 0x31198cu: goto label_31198c;
        case 0x311990u: goto label_311990;
        case 0x311994u: goto label_311994;
        case 0x311998u: goto label_311998;
        case 0x31199cu: goto label_31199c;
        case 0x3119a0u: goto label_3119a0;
        case 0x3119a4u: goto label_3119a4;
        case 0x3119a8u: goto label_3119a8;
        case 0x3119acu: goto label_3119ac;
        case 0x3119b0u: goto label_3119b0;
        case 0x3119b4u: goto label_3119b4;
        case 0x3119b8u: goto label_3119b8;
        case 0x3119bcu: goto label_3119bc;
        case 0x3119c0u: goto label_3119c0;
        case 0x3119c4u: goto label_3119c4;
        case 0x3119c8u: goto label_3119c8;
        case 0x3119ccu: goto label_3119cc;
        case 0x3119d0u: goto label_3119d0;
        case 0x3119d4u: goto label_3119d4;
        case 0x3119d8u: goto label_3119d8;
        case 0x3119dcu: goto label_3119dc;
        case 0x3119e0u: goto label_3119e0;
        case 0x3119e4u: goto label_3119e4;
        case 0x3119e8u: goto label_3119e8;
        case 0x3119ecu: goto label_3119ec;
        case 0x3119f0u: goto label_3119f0;
        case 0x3119f4u: goto label_3119f4;
        case 0x3119f8u: goto label_3119f8;
        case 0x3119fcu: goto label_3119fc;
        case 0x311a00u: goto label_311a00;
        case 0x311a04u: goto label_311a04;
        case 0x311a08u: goto label_311a08;
        case 0x311a0cu: goto label_311a0c;
        case 0x311a10u: goto label_311a10;
        case 0x311a14u: goto label_311a14;
        case 0x311a18u: goto label_311a18;
        case 0x311a1cu: goto label_311a1c;
        case 0x311a20u: goto label_311a20;
        case 0x311a24u: goto label_311a24;
        case 0x311a28u: goto label_311a28;
        case 0x311a2cu: goto label_311a2c;
        case 0x311a30u: goto label_311a30;
        case 0x311a34u: goto label_311a34;
        case 0x311a38u: goto label_311a38;
        case 0x311a3cu: goto label_311a3c;
        case 0x311a40u: goto label_311a40;
        case 0x311a44u: goto label_311a44;
        case 0x311a48u: goto label_311a48;
        case 0x311a4cu: goto label_311a4c;
        case 0x311a50u: goto label_311a50;
        case 0x311a54u: goto label_311a54;
        case 0x311a58u: goto label_311a58;
        case 0x311a5cu: goto label_311a5c;
        case 0x311a60u: goto label_311a60;
        case 0x311a64u: goto label_311a64;
        case 0x311a68u: goto label_311a68;
        case 0x311a6cu: goto label_311a6c;
        case 0x311a70u: goto label_311a70;
        case 0x311a74u: goto label_311a74;
        case 0x311a78u: goto label_311a78;
        case 0x311a7cu: goto label_311a7c;
        case 0x311a80u: goto label_311a80;
        case 0x311a84u: goto label_311a84;
        case 0x311a88u: goto label_311a88;
        case 0x311a8cu: goto label_311a8c;
        case 0x311a90u: goto label_311a90;
        case 0x311a94u: goto label_311a94;
        case 0x311a98u: goto label_311a98;
        case 0x311a9cu: goto label_311a9c;
        case 0x311aa0u: goto label_311aa0;
        case 0x311aa4u: goto label_311aa4;
        case 0x311aa8u: goto label_311aa8;
        case 0x311aacu: goto label_311aac;
        case 0x311ab0u: goto label_311ab0;
        case 0x311ab4u: goto label_311ab4;
        case 0x311ab8u: goto label_311ab8;
        case 0x311abcu: goto label_311abc;
        case 0x311ac0u: goto label_311ac0;
        case 0x311ac4u: goto label_311ac4;
        case 0x311ac8u: goto label_311ac8;
        case 0x311accu: goto label_311acc;
        case 0x311ad0u: goto label_311ad0;
        case 0x311ad4u: goto label_311ad4;
        case 0x311ad8u: goto label_311ad8;
        case 0x311adcu: goto label_311adc;
        case 0x311ae0u: goto label_311ae0;
        case 0x311ae4u: goto label_311ae4;
        case 0x311ae8u: goto label_311ae8;
        case 0x311aecu: goto label_311aec;
        case 0x311af0u: goto label_311af0;
        case 0x311af4u: goto label_311af4;
        case 0x311af8u: goto label_311af8;
        case 0x311afcu: goto label_311afc;
        case 0x311b00u: goto label_311b00;
        case 0x311b04u: goto label_311b04;
        case 0x311b08u: goto label_311b08;
        case 0x311b0cu: goto label_311b0c;
        case 0x311b10u: goto label_311b10;
        case 0x311b14u: goto label_311b14;
        case 0x311b18u: goto label_311b18;
        case 0x311b1cu: goto label_311b1c;
        case 0x311b20u: goto label_311b20;
        case 0x311b24u: goto label_311b24;
        case 0x311b28u: goto label_311b28;
        case 0x311b2cu: goto label_311b2c;
        case 0x311b30u: goto label_311b30;
        case 0x311b34u: goto label_311b34;
        case 0x311b38u: goto label_311b38;
        case 0x311b3cu: goto label_311b3c;
        case 0x311b40u: goto label_311b40;
        case 0x311b44u: goto label_311b44;
        case 0x311b48u: goto label_311b48;
        case 0x311b4cu: goto label_311b4c;
        case 0x311b50u: goto label_311b50;
        case 0x311b54u: goto label_311b54;
        case 0x311b58u: goto label_311b58;
        case 0x311b5cu: goto label_311b5c;
        case 0x311b60u: goto label_311b60;
        case 0x311b64u: goto label_311b64;
        case 0x311b68u: goto label_311b68;
        case 0x311b6cu: goto label_311b6c;
        case 0x311b70u: goto label_311b70;
        case 0x311b74u: goto label_311b74;
        case 0x311b78u: goto label_311b78;
        case 0x311b7cu: goto label_311b7c;
        case 0x311b80u: goto label_311b80;
        case 0x311b84u: goto label_311b84;
        case 0x311b88u: goto label_311b88;
        case 0x311b8cu: goto label_311b8c;
        case 0x311b90u: goto label_311b90;
        case 0x311b94u: goto label_311b94;
        case 0x311b98u: goto label_311b98;
        case 0x311b9cu: goto label_311b9c;
        case 0x311ba0u: goto label_311ba0;
        case 0x311ba4u: goto label_311ba4;
        case 0x311ba8u: goto label_311ba8;
        case 0x311bacu: goto label_311bac;
        case 0x311bb0u: goto label_311bb0;
        case 0x311bb4u: goto label_311bb4;
        case 0x311bb8u: goto label_311bb8;
        case 0x311bbcu: goto label_311bbc;
        case 0x311bc0u: goto label_311bc0;
        case 0x311bc4u: goto label_311bc4;
        case 0x311bc8u: goto label_311bc8;
        case 0x311bccu: goto label_311bcc;
        case 0x311bd0u: goto label_311bd0;
        case 0x311bd4u: goto label_311bd4;
        case 0x311bd8u: goto label_311bd8;
        case 0x311bdcu: goto label_311bdc;
        case 0x311be0u: goto label_311be0;
        case 0x311be4u: goto label_311be4;
        case 0x311be8u: goto label_311be8;
        case 0x311becu: goto label_311bec;
        case 0x311bf0u: goto label_311bf0;
        case 0x311bf4u: goto label_311bf4;
        case 0x311bf8u: goto label_311bf8;
        case 0x311bfcu: goto label_311bfc;
        case 0x311c00u: goto label_311c00;
        case 0x311c04u: goto label_311c04;
        case 0x311c08u: goto label_311c08;
        case 0x311c0cu: goto label_311c0c;
        case 0x311c10u: goto label_311c10;
        case 0x311c14u: goto label_311c14;
        case 0x311c18u: goto label_311c18;
        case 0x311c1cu: goto label_311c1c;
        case 0x311c20u: goto label_311c20;
        case 0x311c24u: goto label_311c24;
        case 0x311c28u: goto label_311c28;
        case 0x311c2cu: goto label_311c2c;
        case 0x311c30u: goto label_311c30;
        case 0x311c34u: goto label_311c34;
        case 0x311c38u: goto label_311c38;
        case 0x311c3cu: goto label_311c3c;
        default: break;
    }

    ctx->pc = 0x311818u;

label_311818:
    // 0x311818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31181c:
    // 0x31181c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31181cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
label_311820:
    // 0x311820: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x311820u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
label_311824:
    // 0x311824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_311828:
    // 0x311828: 0x24c61c40  addiu       $a2, $a2, 0x1C40
    ctx->pc = 0x311828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7232));
label_31182c:
    // 0x31182c: 0x24e71c48  addiu       $a3, $a3, 0x1C48
    ctx->pc = 0x31182cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7240));
label_311830:
    // 0x311830: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311834:
    // 0x311834: 0xc1063f6  jal         func_418FD8
label_311838:
    if (ctx->pc == 0x311838u) {
        ctx->pc = 0x311838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311834u;
        // 0x311838: 0x24050134  addiu       $a1, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31183Cu;
        goto label_31183c;
    }
    ctx->pc = 0x311834u;
    SET_GPR_U32(ctx, 31, 0x31183Cu);
    ctx->pc = 0x311838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311834u;
    // 0x311838: 0x24050134  addiu       $a1, $zero, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x311834u, 0x31183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31183Cu;
label_31183c:
    // 0x31183c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31183cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
label_311840:
    // 0x311840: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x311840u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
label_311844:
    // 0x311844: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x311844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
label_311848:
    // 0x311848: 0x24c61c58  addiu       $a2, $a2, 0x1C58
    ctx->pc = 0x311848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7256));
label_31184c:
    // 0x31184c: 0x24e71c78  addiu       $a3, $a3, 0x1C78
    ctx->pc = 0x31184cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7288));
label_311850:
    // 0x311850: 0x25081ce0  addiu       $t0, $t0, 0x1CE0
    ctx->pc = 0x311850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7392));
label_311854:
    // 0x311854: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x311854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_311858:
    // 0x311858: 0xc0e344a  jal         func_38D128
label_31185c:
    if (ctx->pc == 0x31185Cu) {
        ctx->pc = 0x31185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311858u;
        // 0x31185c: 0x24050134  addiu       $a1, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311860u;
        goto label_311860;
    }
    ctx->pc = 0x311858u;
    SET_GPR_U32(ctx, 31, 0x311860u);
    ctx->pc = 0x31185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311858u;
    // 0x31185c: 0x24050134  addiu       $a1, $zero, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x311858u, 0x311860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311860u;
label_311860:
    // 0x311860: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x311860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
label_311864:
    // 0x311864: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x311864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
label_311868:
    // 0x311868: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x311868u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
label_31186c:
    // 0x31186c: 0x24c61ce8  addiu       $a2, $a2, 0x1CE8
    ctx->pc = 0x31186cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7400));
label_311870:
    // 0x311870: 0x25081d60  addiu       $t0, $t0, 0x1D60
    ctx->pc = 0x311870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7520));
label_311874:
    // 0x311874: 0x24e71d08  addiu       $a3, $a3, 0x1D08
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7432));
label_311878:
    // 0x311878: 0x24050134  addiu       $a1, $zero, 0x134
    ctx->pc = 0x311878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_31187c:
    // 0x31187c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x31187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_311880:
    // 0x311880: 0xc0e63a2  jal         func_398E88
label_311884:
    if (ctx->pc == 0x311884u) {
        ctx->pc = 0x311884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311880u;
        // 0x311884: 0xaf82a570  sw          $v0, -0x5A90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311888u;
        goto label_311888;
    }
    ctx->pc = 0x311880u;
    SET_GPR_U32(ctx, 31, 0x311888u);
    ctx->pc = 0x311884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311880u;
    // 0x311884: 0xaf82a570  sw          $v0, -0x5A90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x311880u, 0x311888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311888u;
label_311888:
    // 0x311888: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x311888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_31188c:
    // 0x31188c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31188cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
label_311890:
    // 0x311890: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x311890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
label_311894:
    // 0x311894: 0x24a51e30  addiu       $a1, $a1, 0x1E30
    ctx->pc = 0x311894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7728));
label_311898:
    // 0x311898: 0x24c61d68  addiu       $a2, $a2, 0x1D68
    ctx->pc = 0x311898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7528));
label_31189c:
    // 0x31189c: 0x24e71f08  addiu       $a3, $a3, 0x1F08
    ctx->pc = 0x31189cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7944));
label_3118a0:
    // 0x3118a0: 0x24040134  addiu       $a0, $zero, 0x134
    ctx->pc = 0x3118a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_3118a4:
    // 0x3118a4: 0xc0e345c  jal         func_38D170
label_3118a8:
    if (ctx->pc == 0x3118A8u) {
        ctx->pc = 0x3118A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118A4u;
        // 0x3118a8: 0xaf82a574  sw          $v0, -0x5A8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3118ACu;
        goto label_3118ac;
    }
    ctx->pc = 0x3118A4u;
    SET_GPR_U32(ctx, 31, 0x3118ACu);
    ctx->pc = 0x3118A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118A4u;
    // 0x3118a8: 0xaf82a574  sw          $v0, -0x5A8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x3118A4u, 0x3118ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118ACu;
label_3118ac:
    // 0x3118ac: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x3118acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_3118b0:
    // 0x3118b0: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x3118b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
label_3118b4:
    // 0x3118b4: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x3118b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
label_3118b8:
    // 0x3118b8: 0x24a52030  addiu       $a1, $a1, 0x2030
    ctx->pc = 0x3118b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
label_3118bc:
    // 0x3118bc: 0x24c61f50  addiu       $a2, $a2, 0x1F50
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8016));
label_3118c0:
    // 0x3118c0: 0x24e72108  addiu       $a3, $a3, 0x2108
    ctx->pc = 0x3118c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8456));
label_3118c4:
    // 0x3118c4: 0xc0e63b4  jal         func_398ED0
label_3118c8:
    if (ctx->pc == 0x3118C8u) {
        ctx->pc = 0x3118C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118C4u;
        // 0x3118c8: 0x24040134  addiu       $a0, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3118CCu;
        goto label_3118cc;
    }
    ctx->pc = 0x3118C4u;
    SET_GPR_U32(ctx, 31, 0x3118CCu);
    ctx->pc = 0x3118C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118C4u;
    // 0x3118c8: 0x24040134  addiu       $a0, $zero, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x3118C4u, 0x3118CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118CCu;
label_3118cc:
    // 0x3118cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3118ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3118d0:
    // 0x3118d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3118d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3118d4:
    // 0x3118d4: 0xaf80a578  sw          $zero, -0x5A88($gp)
    ctx->pc = 0x3118d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944120), GPR_U32(ctx, 0));
label_3118d8:
    // 0x3118d8: 0x3e00008  jr          $ra
label_3118dc:
    if (ctx->pc == 0x3118DCu) {
        ctx->pc = 0x3118DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118D8u;
        // 0x3118dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3118E0u;
        goto label_3118e0;
    }
    ctx->pc = 0x3118D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3118DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118D8u;
        // 0x3118dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3118D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3118E0u;
label_3118e0:
    // 0x3118e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3118e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3118e4:
    // 0x3118e4: 0x8f83a570  lw          $v1, -0x5A90($gp)
    ctx->pc = 0x3118e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
label_3118e8:
    // 0x3118e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3118e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3118ec:
    // 0x3118ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3118ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3118f0:
    // 0x3118f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3118f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3118f4:
    // 0x3118f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3118f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3118f8:
    // 0x3118f8: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x3118f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3118fc:
    // 0x3118fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3118fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311900:
    // 0x311900: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x311900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311904:
    // 0x311904: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311908:
    // 0x311908: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
label_31190c:
    if (ctx->pc == 0x31190Cu) {
        ctx->pc = 0x31190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311908u;
        // 0x31190c: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311910u;
        goto label_311910;
    }
    ctx->pc = 0x311908u;
    {
        const bool branch_taken_0x311908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x31190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311908u;
        // 0x31190c: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311908) {
            ctx->pc = 0x311984u;
            goto label_311984;
        }
    }
    ctx->pc = 0x311910u;
label_311910:
    // 0x311910: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x311910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_311914:
    // 0x311914: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x311914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_311918:
    // 0x311918: 0x24a51140  addiu       $a1, $a1, 0x1140
    ctx->pc = 0x311918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
label_31191c:
    // 0x31191c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31191cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_311920:
    // 0x311920: 0xc0e3402  jal         func_38D008
label_311924:
    if (ctx->pc == 0x311924u) {
        ctx->pc = 0x311924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311920u;
        // 0x311924: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311928u;
        goto label_311928;
    }
    ctx->pc = 0x311920u;
    SET_GPR_U32(ctx, 31, 0x311928u);
    ctx->pc = 0x311924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311920u;
    // 0x311924: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D008u, 0x311920u, 0x311928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311928u;
label_311928:
    // 0x311928: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x311928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31192c:
    // 0x31192c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311930:
    // 0x311930: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x311930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_311934:
    // 0x311934: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x311934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_311938:
    // 0x311938: 0x40f809  jalr        $v0
label_31193c:
    if (ctx->pc == 0x31193Cu) {
        ctx->pc = 0x31193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311938u;
        // 0x31193c: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311940u;
        goto label_311940;
    }
    ctx->pc = 0x311938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311940u);
        ctx->pc = 0x31193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311938u;
        // 0x31193c: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311938u, 0x311940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311940u;
label_311940:
    // 0x311940: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x311940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311944:
    // 0x311944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311948:
    // 0x311948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31194c:
    // 0x31194c: 0xc0bb7e6  jal         func_2EDF98
label_311950:
    if (ctx->pc == 0x311950u) {
        ctx->pc = 0x311950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31194Cu;
        // 0x311950: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311954u;
        goto label_311954;
    }
    ctx->pc = 0x31194Cu;
    SET_GPR_U32(ctx, 31, 0x311954u);
    ctx->pc = 0x311950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31194Cu;
    // 0x311950: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31194Cu, 0x311954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311954u;
label_311954:
    // 0x311954: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x311954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_311958:
    // 0x311958: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x311958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_31195c:
    // 0x31195c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311960:
    // 0x311960: 0x24a51248  addiu       $a1, $a1, 0x1248
    ctx->pc = 0x311960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4680));
label_311964:
    // 0x311964: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x311964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_311968:
    // 0x311968: 0xc0e3402  jal         func_38D008
label_31196c:
    if (ctx->pc == 0x31196Cu) {
        ctx->pc = 0x31196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311968u;
        // 0x31196c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311970u;
        goto label_311970;
    }
    ctx->pc = 0x311968u;
    SET_GPR_U32(ctx, 31, 0x311970u);
    ctx->pc = 0x31196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311968u;
    // 0x31196c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D008u, 0x311968u, 0x311970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311970u;
label_311970:
    // 0x311970: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x311970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311974:
    // 0x311974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311978:
    // 0x311978: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x311978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_31197c:
    // 0x31197c: 0x10000002  b           . + 4 + (0x2 << 2)
label_311980:
    if (ctx->pc == 0x311980u) {
        ctx->pc = 0x311980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31197Cu;
        // 0x311980: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311984u;
        goto label_311984;
    }
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31197Cu;
        // 0x311980: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31197c) {
            ctx->pc = 0x311988u;
            goto label_311988;
        }
    }
    ctx->pc = 0x311984u;
label_311984:
    // 0x311984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311988:
    // 0x311988: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x311988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31198c:
    // 0x31198c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31198cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311990:
    // 0x311990: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311994:
    // 0x311994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311998:
    // 0x311998: 0x3e00008  jr          $ra
label_31199c:
    if (ctx->pc == 0x31199Cu) {
        ctx->pc = 0x31199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311998u;
        // 0x31199c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119A0u;
        goto label_3119a0;
    }
    ctx->pc = 0x311998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311998u;
        // 0x31199c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3119A0u;
label_3119a0:
    // 0x3119a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3119a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3119a4:
    // 0x3119a4: 0x8f83a574  lw          $v1, -0x5A8C($gp)
    ctx->pc = 0x3119a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
label_3119a8:
    // 0x3119a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3119a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3119ac:
    // 0x3119ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3119acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3119b0:
    // 0x3119b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3119b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3119b4:
    // 0x3119b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3119b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3119b8:
    // 0x3119b8: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x3119b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3119bc:
    // 0x3119bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3119bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3119c0:
    // 0x3119c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3119c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3119c4:
    // 0x3119c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3119c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3119c8:
    // 0x3119c8: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
label_3119cc:
    if (ctx->pc == 0x3119CCu) {
        ctx->pc = 0x3119CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119C8u;
        // 0x3119cc: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119D0u;
        goto label_3119d0;
    }
    ctx->pc = 0x3119C8u;
    {
        const bool branch_taken_0x3119c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3119CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119C8u;
        // 0x3119cc: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119c8) {
            ctx->pc = 0x311A44u;
            goto label_311a44;
        }
    }
    ctx->pc = 0x3119D0u;
label_3119d0:
    // 0x3119d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3119d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3119d4:
    // 0x3119d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3119d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3119d8:
    // 0x3119d8: 0x24a51140  addiu       $a1, $a1, 0x1140
    ctx->pc = 0x3119d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
label_3119dc:
    // 0x3119dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3119dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3119e0:
    // 0x3119e0: 0xc0e6390  jal         func_398E40
label_3119e4:
    if (ctx->pc == 0x3119E4u) {
        ctx->pc = 0x3119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119E0u;
        // 0x3119e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3119E8u;
        goto label_3119e8;
    }
    ctx->pc = 0x3119E0u;
    SET_GPR_U32(ctx, 31, 0x3119E8u);
    ctx->pc = 0x3119E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3119E0u;
    // 0x3119e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x3119E0u, 0x3119E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3119E8u;
label_3119e8:
    // 0x3119e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3119e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3119ec:
    // 0x3119ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3119ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3119f0:
    // 0x3119f0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3119f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3119f4:
    // 0x3119f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3119f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3119f8:
    // 0x3119f8: 0x40f809  jalr        $v0
label_3119fc:
    if (ctx->pc == 0x3119FCu) {
        ctx->pc = 0x3119FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F8u;
        // 0x3119fc: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A00u;
        goto label_311a00;
    }
    ctx->pc = 0x3119F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311A00u);
        ctx->pc = 0x3119FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F8u;
        // 0x3119fc: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3119F8u, 0x311A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311A00u;
label_311a00:
    // 0x311a00: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x311a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311a04:
    // 0x311a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311a08:
    // 0x311a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311a0c:
    // 0x311a0c: 0xc0bb7e6  jal         func_2EDF98
label_311a10:
    if (ctx->pc == 0x311A10u) {
        ctx->pc = 0x311A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A0Cu;
        // 0x311a10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A14u;
        goto label_311a14;
    }
    ctx->pc = 0x311A0Cu;
    SET_GPR_U32(ctx, 31, 0x311A14u);
    ctx->pc = 0x311A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A0Cu;
    // 0x311a10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x311A0Cu, 0x311A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A14u;
label_311a14:
    // 0x311a14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x311a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_311a18:
    // 0x311a18: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x311a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_311a1c:
    // 0x311a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311a20:
    // 0x311a20: 0x24a51248  addiu       $a1, $a1, 0x1248
    ctx->pc = 0x311a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4680));
label_311a24:
    // 0x311a24: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x311a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_311a28:
    // 0x311a28: 0xc0e6390  jal         func_398E40
label_311a2c:
    if (ctx->pc == 0x311A2Cu) {
        ctx->pc = 0x311A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A28u;
        // 0x311a2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A30u;
        goto label_311a30;
    }
    ctx->pc = 0x311A28u;
    SET_GPR_U32(ctx, 31, 0x311A30u);
    ctx->pc = 0x311A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A28u;
    // 0x311a2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x311A28u, 0x311A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A30u;
label_311a30:
    // 0x311a30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x311a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311a34:
    // 0x311a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311a38:
    // 0x311a38: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x311a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_311a3c:
    // 0x311a3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_311a40:
    if (ctx->pc == 0x311A40u) {
        ctx->pc = 0x311A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A3Cu;
        // 0x311a40: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A44u;
        goto label_311a44;
    }
    ctx->pc = 0x311A3Cu;
    {
        const bool branch_taken_0x311a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A3Cu;
        // 0x311a40: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a3c) {
            ctx->pc = 0x311A48u;
            goto label_311a48;
        }
    }
    ctx->pc = 0x311A44u;
label_311a44:
    // 0x311a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311a48:
    // 0x311a48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x311a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311a4c:
    // 0x311a4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x311a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311a50:
    // 0x311a50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311a54:
    // 0x311a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311a58:
    // 0x311a58: 0x3e00008  jr          $ra
label_311a5c:
    if (ctx->pc == 0x311A5Cu) {
        ctx->pc = 0x311A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A58u;
        // 0x311a5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A60u;
        goto label_311a60;
    }
    ctx->pc = 0x311A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A58u;
        // 0x311a5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311A60u;
label_311a60:
    // 0x311a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_311a64:
    // 0x311a64: 0x8f83a570  lw          $v1, -0x5A90($gp)
    ctx->pc = 0x311a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
label_311a68:
    // 0x311a68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x311a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_311a6c:
    // 0x311a6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x311a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_311a70:
    // 0x311a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311a74:
    // 0x311a74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_311a78:
    // 0x311a78: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x311a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_311a7c:
    // 0x311a7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311a80:
    // 0x311a80: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x311a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311a84:
    // 0x311a84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311a88:
    // 0x311a88: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
label_311a8c:
    if (ctx->pc == 0x311A8Cu) {
        ctx->pc = 0x311A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A88u;
        // 0x311a8c: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311A90u;
        goto label_311a90;
    }
    ctx->pc = 0x311A88u;
    {
        const bool branch_taken_0x311a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x311A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A88u;
        // 0x311a8c: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a88) {
            ctx->pc = 0x311B04u;
            goto label_311b04;
        }
    }
    ctx->pc = 0x311A90u;
label_311a90:
    // 0x311a90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x311a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_311a94:
    // 0x311a94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x311a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_311a98:
    // 0x311a98: 0x24a51140  addiu       $a1, $a1, 0x1140
    ctx->pc = 0x311a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
label_311a9c:
    // 0x311a9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x311a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_311aa0:
    // 0x311aa0: 0xc0e3402  jal         func_38D008
label_311aa4:
    if (ctx->pc == 0x311AA4u) {
        ctx->pc = 0x311AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AA0u;
        // 0x311aa4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AA8u;
        goto label_311aa8;
    }
    ctx->pc = 0x311AA0u;
    SET_GPR_U32(ctx, 31, 0x311AA8u);
    ctx->pc = 0x311AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AA0u;
    // 0x311aa4: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D008u, 0x311AA0u, 0x311AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AA8u;
label_311aa8:
    // 0x311aa8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x311aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_311aac:
    // 0x311aac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x311aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311ab0:
    // 0x311ab0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x311ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_311ab4:
    // 0x311ab4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x311ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_311ab8:
    // 0x311ab8: 0x40f809  jalr        $v0
label_311abc:
    if (ctx->pc == 0x311ABCu) {
        ctx->pc = 0x311ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AB8u;
        // 0x311abc: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AC0u;
        goto label_311ac0;
    }
    ctx->pc = 0x311AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311AC0u);
        ctx->pc = 0x311ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AB8u;
        // 0x311abc: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311AB8u, 0x311AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311AC0u;
label_311ac0:
    // 0x311ac0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x311ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311ac4:
    // 0x311ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311ac8:
    // 0x311ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311acc:
    // 0x311acc: 0xc0bb7e6  jal         func_2EDF98
label_311ad0:
    if (ctx->pc == 0x311AD0u) {
        ctx->pc = 0x311AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311ACCu;
        // 0x311ad0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AD4u;
        goto label_311ad4;
    }
    ctx->pc = 0x311ACCu;
    SET_GPR_U32(ctx, 31, 0x311AD4u);
    ctx->pc = 0x311AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311ACCu;
    // 0x311ad0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x311ACCu, 0x311AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AD4u;
label_311ad4:
    // 0x311ad4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x311ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_311ad8:
    // 0x311ad8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x311ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_311adc:
    // 0x311adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311ae0:
    // 0x311ae0: 0x24a51248  addiu       $a1, $a1, 0x1248
    ctx->pc = 0x311ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4680));
label_311ae4:
    // 0x311ae4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x311ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_311ae8:
    // 0x311ae8: 0xc0e3402  jal         func_38D008
label_311aec:
    if (ctx->pc == 0x311AECu) {
        ctx->pc = 0x311AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AE8u;
        // 0x311aec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311AF0u;
        goto label_311af0;
    }
    ctx->pc = 0x311AE8u;
    SET_GPR_U32(ctx, 31, 0x311AF0u);
    ctx->pc = 0x311AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311AE8u;
    // 0x311aec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D008u, 0x311AE8u, 0x311AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AF0u;
label_311af0:
    // 0x311af0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x311af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311af4:
    // 0x311af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311af8:
    // 0x311af8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x311af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_311afc:
    // 0x311afc: 0x10000002  b           . + 4 + (0x2 << 2)
label_311b00:
    if (ctx->pc == 0x311B00u) {
        ctx->pc = 0x311B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AFCu;
        // 0x311b00: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B04u;
        goto label_311b04;
    }
    ctx->pc = 0x311AFCu;
    {
        const bool branch_taken_0x311afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AFCu;
        // 0x311b00: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311afc) {
            ctx->pc = 0x311B08u;
            goto label_311b08;
        }
    }
    ctx->pc = 0x311B04u;
label_311b04:
    // 0x311b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311b08:
    // 0x311b08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x311b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311b0c:
    // 0x311b0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x311b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311b10:
    // 0x311b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311b14:
    // 0x311b14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311b18:
    // 0x311b18: 0x3e00008  jr          $ra
label_311b1c:
    if (ctx->pc == 0x311B1Cu) {
        ctx->pc = 0x311B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B18u;
        // 0x311b1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B20u;
        goto label_311b20;
    }
    ctx->pc = 0x311B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B18u;
        // 0x311b1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B20u;
label_311b20:
    // 0x311b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_311b24:
    // 0x311b24: 0x8f83a574  lw          $v1, -0x5A8C($gp)
    ctx->pc = 0x311b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
label_311b28:
    // 0x311b28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x311b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_311b2c:
    // 0x311b2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x311b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_311b30:
    // 0x311b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311b34:
    // 0x311b34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_311b38:
    // 0x311b38: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x311b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_311b3c:
    // 0x311b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_311b40:
    // 0x311b40: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x311b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311b44:
    // 0x311b44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311b48:
    // 0x311b48: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
label_311b4c:
    if (ctx->pc == 0x311B4Cu) {
        ctx->pc = 0x311B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B48u;
        // 0x311b4c: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B50u;
        goto label_311b50;
    }
    ctx->pc = 0x311B48u;
    {
        const bool branch_taken_0x311b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x311B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B48u;
        // 0x311b4c: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b48) {
            ctx->pc = 0x311BC4u;
            goto label_311bc4;
        }
    }
    ctx->pc = 0x311B50u;
label_311b50:
    // 0x311b50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x311b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_311b54:
    // 0x311b54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x311b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_311b58:
    // 0x311b58: 0x24a51140  addiu       $a1, $a1, 0x1140
    ctx->pc = 0x311b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
label_311b5c:
    // 0x311b5c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x311b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_311b60:
    // 0x311b60: 0xc0e6390  jal         func_398E40
label_311b64:
    if (ctx->pc == 0x311B64u) {
        ctx->pc = 0x311B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B60u;
        // 0x311b64: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B68u;
        goto label_311b68;
    }
    ctx->pc = 0x311B60u;
    SET_GPR_U32(ctx, 31, 0x311B68u);
    ctx->pc = 0x311B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B60u;
    // 0x311b64: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x311B60u, 0x311B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B68u;
label_311b68:
    // 0x311b68: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x311b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_311b6c:
    // 0x311b6c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x311b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311b70:
    // 0x311b70: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x311b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_311b74:
    // 0x311b74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x311b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_311b78:
    // 0x311b78: 0x40f809  jalr        $v0
label_311b7c:
    if (ctx->pc == 0x311B7Cu) {
        ctx->pc = 0x311B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B78u;
        // 0x311b7c: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B80u;
        goto label_311b80;
    }
    ctx->pc = 0x311B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x311B80u);
        ctx->pc = 0x311B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B78u;
        // 0x311b7c: 0x34a50134  ori         $a1, $a1, 0x134 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B78u, 0x311B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x311B80u;
label_311b80:
    // 0x311b80: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x311b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311b84:
    // 0x311b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311b88:
    // 0x311b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311b8c:
    // 0x311b8c: 0xc0bb7e6  jal         func_2EDF98
label_311b90:
    if (ctx->pc == 0x311B90u) {
        ctx->pc = 0x311B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B8Cu;
        // 0x311b90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311B94u;
        goto label_311b94;
    }
    ctx->pc = 0x311B8Cu;
    SET_GPR_U32(ctx, 31, 0x311B94u);
    ctx->pc = 0x311B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B8Cu;
    // 0x311b90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x311B8Cu, 0x311B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B94u;
label_311b94:
    // 0x311b94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x311b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_311b98:
    // 0x311b98: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x311b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_311b9c:
    // 0x311b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311ba0:
    // 0x311ba0: 0x24a51248  addiu       $a1, $a1, 0x1248
    ctx->pc = 0x311ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4680));
label_311ba4:
    // 0x311ba4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x311ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_311ba8:
    // 0x311ba8: 0xc0e6390  jal         func_398E40
label_311bac:
    if (ctx->pc == 0x311BACu) {
        ctx->pc = 0x311BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BA8u;
        // 0x311bac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311BB0u;
        goto label_311bb0;
    }
    ctx->pc = 0x311BA8u;
    SET_GPR_U32(ctx, 31, 0x311BB0u);
    ctx->pc = 0x311BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311BA8u;
    // 0x311bac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x311BA8u, 0x311BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BB0u;
label_311bb0:
    // 0x311bb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x311bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_311bb4:
    // 0x311bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311bb8:
    // 0x311bb8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x311bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_311bbc:
    // 0x311bbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_311bc0:
    if (ctx->pc == 0x311BC0u) {
        ctx->pc = 0x311BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BBCu;
        // 0x311bc0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311BC4u;
        goto label_311bc4;
    }
    ctx->pc = 0x311BBCu;
    {
        const bool branch_taken_0x311bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BBCu;
        // 0x311bc0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bbc) {
            ctx->pc = 0x311BC8u;
            goto label_311bc8;
        }
    }
    ctx->pc = 0x311BC4u;
label_311bc4:
    // 0x311bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311bc8:
    // 0x311bc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x311bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311bcc:
    // 0x311bcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x311bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311bd0:
    // 0x311bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311bd4:
    // 0x311bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311bd8:
    // 0x311bd8: 0x3e00008  jr          $ra
label_311bdc:
    if (ctx->pc == 0x311BDCu) {
        ctx->pc = 0x311BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BD8u;
        // 0x311bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311BE0u;
        goto label_311be0;
    }
    ctx->pc = 0x311BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BD8u;
        // 0x311bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311BE0u;
label_311be0:
    // 0x311be0: 0x8f82a570  lw          $v0, -0x5A90($gp)
    ctx->pc = 0x311be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944112)));
label_311be4:
    // 0x311be4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x311be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_311be8:
    // 0x311be8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x311be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_311bec:
    // 0x311bec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_311bf0:
    if (ctx->pc == 0x311BF0u) {
        ctx->pc = 0x311BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BECu;
        // 0x311bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311BF4u;
        goto label_311bf4;
    }
    ctx->pc = 0x311BECu;
    {
        const bool branch_taken_0x311bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BECu;
        // 0x311bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bec) {
            ctx->pc = 0x311BFCu;
            goto label_311bfc;
        }
    }
    ctx->pc = 0x311BF4u;
label_311bf4:
    // 0x311bf4: 0x3e00008  jr          $ra
label_311bf8:
    if (ctx->pc == 0x311BF8u) {
        ctx->pc = 0x311BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BF4u;
        // 0x311bf8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311BFCu;
        goto label_311bfc;
    }
    ctx->pc = 0x311BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BF4u;
        // 0x311bf8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311BFCu;
label_311bfc:
    // 0x311bfc: 0x3e00008  jr          $ra
label_311c00:
    if (ctx->pc == 0x311C00u) {
        ctx->pc = 0x311C04u;
        goto label_311c04;
    }
    ctx->pc = 0x311BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C04u;
label_311c04:
    // 0x311c04: 0x0  nop
    ctx->pc = 0x311c04u;
    // NOP
label_311c08:
    // 0x311c08: 0x8f82a574  lw          $v0, -0x5A8C($gp)
    ctx->pc = 0x311c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944116)));
label_311c0c:
    // 0x311c0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x311c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_311c10:
    // 0x311c10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x311c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_311c14:
    // 0x311c14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_311c18:
    if (ctx->pc == 0x311C18u) {
        ctx->pc = 0x311C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C14u;
        // 0x311c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311C1Cu;
        goto label_311c1c;
    }
    ctx->pc = 0x311C14u;
    {
        const bool branch_taken_0x311c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C14u;
        // 0x311c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c14) {
            ctx->pc = 0x311C24u;
            goto label_311c24;
        }
    }
    ctx->pc = 0x311C1Cu;
label_311c1c:
    // 0x311c1c: 0x3e00008  jr          $ra
label_311c20:
    if (ctx->pc == 0x311C20u) {
        ctx->pc = 0x311C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C1Cu;
        // 0x311c20: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311C24u;
        goto label_311c24;
    }
    ctx->pc = 0x311C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C1Cu;
        // 0x311c20: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C24u;
label_311c24:
    // 0x311c24: 0x3e00008  jr          $ra
label_311c28:
    if (ctx->pc == 0x311C28u) {
        ctx->pc = 0x311C2Cu;
        goto label_311c2c;
    }
    ctx->pc = 0x311C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C2Cu;
label_311c2c:
    // 0x311c2c: 0x0  nop
    ctx->pc = 0x311c2cu;
    // NOP
label_311c30:
    // 0x311c30: 0x3e00008  jr          $ra
label_311c34:
    if (ctx->pc == 0x311C34u) {
        ctx->pc = 0x311C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C30u;
        // 0x311c34: 0x8f82a578  lw          $v0, -0x5A88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311C38u;
        goto label_311c38;
    }
    ctx->pc = 0x311C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C30u;
        // 0x311c34: 0x8f82a578  lw          $v0, -0x5A88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C38u;
label_311c38:
    // 0x311c38: 0x3e00008  jr          $ra
label_311c3c:
    if (ctx->pc == 0x311C3Cu) {
        ctx->pc = 0x311C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C38u;
        // 0x311c3c: 0xaf84a578  sw          $a0, -0x5A88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311C40u;
        goto label_fallthrough_0x311c38;
    }
    ctx->pc = 0x311C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C38u;
        // 0x311c3c: 0xaf84a578  sw          $a0, -0x5A88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311c38:
    ctx->pc = 0x311C40u;
}
