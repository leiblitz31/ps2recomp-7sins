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

// Function: sub_0048B6D0
// Address: 0x48b6d0 - 0x48b9b0
void sub_0048B6D0_0x48b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B6D0_0x48b6d0");
#endif

    switch (ctx->pc) {
        case 0x48b6d0u: goto label_48b6d0;
        case 0x48b6d4u: goto label_48b6d4;
        case 0x48b6d8u: goto label_48b6d8;
        case 0x48b6dcu: goto label_48b6dc;
        case 0x48b6e0u: goto label_48b6e0;
        case 0x48b6e4u: goto label_48b6e4;
        case 0x48b6e8u: goto label_48b6e8;
        case 0x48b6ecu: goto label_48b6ec;
        case 0x48b6f0u: goto label_48b6f0;
        case 0x48b6f4u: goto label_48b6f4;
        case 0x48b6f8u: goto label_48b6f8;
        case 0x48b6fcu: goto label_48b6fc;
        case 0x48b700u: goto label_48b700;
        case 0x48b704u: goto label_48b704;
        case 0x48b708u: goto label_48b708;
        case 0x48b70cu: goto label_48b70c;
        case 0x48b710u: goto label_48b710;
        case 0x48b714u: goto label_48b714;
        case 0x48b718u: goto label_48b718;
        case 0x48b71cu: goto label_48b71c;
        case 0x48b720u: goto label_48b720;
        case 0x48b724u: goto label_48b724;
        case 0x48b728u: goto label_48b728;
        case 0x48b72cu: goto label_48b72c;
        case 0x48b730u: goto label_48b730;
        case 0x48b734u: goto label_48b734;
        case 0x48b738u: goto label_48b738;
        case 0x48b73cu: goto label_48b73c;
        case 0x48b740u: goto label_48b740;
        case 0x48b744u: goto label_48b744;
        case 0x48b748u: goto label_48b748;
        case 0x48b74cu: goto label_48b74c;
        case 0x48b750u: goto label_48b750;
        case 0x48b754u: goto label_48b754;
        case 0x48b758u: goto label_48b758;
        case 0x48b75cu: goto label_48b75c;
        case 0x48b760u: goto label_48b760;
        case 0x48b764u: goto label_48b764;
        case 0x48b768u: goto label_48b768;
        case 0x48b76cu: goto label_48b76c;
        case 0x48b770u: goto label_48b770;
        case 0x48b774u: goto label_48b774;
        case 0x48b778u: goto label_48b778;
        case 0x48b77cu: goto label_48b77c;
        case 0x48b780u: goto label_48b780;
        case 0x48b784u: goto label_48b784;
        case 0x48b788u: goto label_48b788;
        case 0x48b78cu: goto label_48b78c;
        case 0x48b790u: goto label_48b790;
        case 0x48b794u: goto label_48b794;
        case 0x48b798u: goto label_48b798;
        case 0x48b79cu: goto label_48b79c;
        case 0x48b7a0u: goto label_48b7a0;
        case 0x48b7a4u: goto label_48b7a4;
        case 0x48b7a8u: goto label_48b7a8;
        case 0x48b7acu: goto label_48b7ac;
        case 0x48b7b0u: goto label_48b7b0;
        case 0x48b7b4u: goto label_48b7b4;
        case 0x48b7b8u: goto label_48b7b8;
        case 0x48b7bcu: goto label_48b7bc;
        case 0x48b7c0u: goto label_48b7c0;
        case 0x48b7c4u: goto label_48b7c4;
        case 0x48b7c8u: goto label_48b7c8;
        case 0x48b7ccu: goto label_48b7cc;
        case 0x48b7d0u: goto label_48b7d0;
        case 0x48b7d4u: goto label_48b7d4;
        case 0x48b7d8u: goto label_48b7d8;
        case 0x48b7dcu: goto label_48b7dc;
        case 0x48b7e0u: goto label_48b7e0;
        case 0x48b7e4u: goto label_48b7e4;
        case 0x48b7e8u: goto label_48b7e8;
        case 0x48b7ecu: goto label_48b7ec;
        case 0x48b7f0u: goto label_48b7f0;
        case 0x48b7f4u: goto label_48b7f4;
        case 0x48b7f8u: goto label_48b7f8;
        case 0x48b7fcu: goto label_48b7fc;
        case 0x48b800u: goto label_48b800;
        case 0x48b804u: goto label_48b804;
        case 0x48b808u: goto label_48b808;
        case 0x48b80cu: goto label_48b80c;
        case 0x48b810u: goto label_48b810;
        case 0x48b814u: goto label_48b814;
        case 0x48b818u: goto label_48b818;
        case 0x48b81cu: goto label_48b81c;
        case 0x48b820u: goto label_48b820;
        case 0x48b824u: goto label_48b824;
        case 0x48b828u: goto label_48b828;
        case 0x48b82cu: goto label_48b82c;
        case 0x48b830u: goto label_48b830;
        case 0x48b834u: goto label_48b834;
        case 0x48b838u: goto label_48b838;
        case 0x48b83cu: goto label_48b83c;
        case 0x48b840u: goto label_48b840;
        case 0x48b844u: goto label_48b844;
        case 0x48b848u: goto label_48b848;
        case 0x48b84cu: goto label_48b84c;
        case 0x48b850u: goto label_48b850;
        case 0x48b854u: goto label_48b854;
        case 0x48b858u: goto label_48b858;
        case 0x48b85cu: goto label_48b85c;
        case 0x48b860u: goto label_48b860;
        case 0x48b864u: goto label_48b864;
        case 0x48b868u: goto label_48b868;
        case 0x48b86cu: goto label_48b86c;
        case 0x48b870u: goto label_48b870;
        case 0x48b874u: goto label_48b874;
        case 0x48b878u: goto label_48b878;
        case 0x48b87cu: goto label_48b87c;
        case 0x48b880u: goto label_48b880;
        case 0x48b884u: goto label_48b884;
        case 0x48b888u: goto label_48b888;
        case 0x48b88cu: goto label_48b88c;
        case 0x48b890u: goto label_48b890;
        case 0x48b894u: goto label_48b894;
        case 0x48b898u: goto label_48b898;
        case 0x48b89cu: goto label_48b89c;
        case 0x48b8a0u: goto label_48b8a0;
        case 0x48b8a4u: goto label_48b8a4;
        case 0x48b8a8u: goto label_48b8a8;
        case 0x48b8acu: goto label_48b8ac;
        case 0x48b8b0u: goto label_48b8b0;
        case 0x48b8b4u: goto label_48b8b4;
        case 0x48b8b8u: goto label_48b8b8;
        case 0x48b8bcu: goto label_48b8bc;
        case 0x48b8c0u: goto label_48b8c0;
        case 0x48b8c4u: goto label_48b8c4;
        case 0x48b8c8u: goto label_48b8c8;
        case 0x48b8ccu: goto label_48b8cc;
        case 0x48b8d0u: goto label_48b8d0;
        case 0x48b8d4u: goto label_48b8d4;
        case 0x48b8d8u: goto label_48b8d8;
        case 0x48b8dcu: goto label_48b8dc;
        case 0x48b8e0u: goto label_48b8e0;
        case 0x48b8e4u: goto label_48b8e4;
        case 0x48b8e8u: goto label_48b8e8;
        case 0x48b8ecu: goto label_48b8ec;
        case 0x48b8f0u: goto label_48b8f0;
        case 0x48b8f4u: goto label_48b8f4;
        case 0x48b8f8u: goto label_48b8f8;
        case 0x48b8fcu: goto label_48b8fc;
        case 0x48b900u: goto label_48b900;
        case 0x48b904u: goto label_48b904;
        case 0x48b908u: goto label_48b908;
        case 0x48b90cu: goto label_48b90c;
        case 0x48b910u: goto label_48b910;
        case 0x48b914u: goto label_48b914;
        case 0x48b918u: goto label_48b918;
        case 0x48b91cu: goto label_48b91c;
        case 0x48b920u: goto label_48b920;
        case 0x48b924u: goto label_48b924;
        case 0x48b928u: goto label_48b928;
        case 0x48b92cu: goto label_48b92c;
        case 0x48b930u: goto label_48b930;
        case 0x48b934u: goto label_48b934;
        case 0x48b938u: goto label_48b938;
        case 0x48b93cu: goto label_48b93c;
        case 0x48b940u: goto label_48b940;
        case 0x48b944u: goto label_48b944;
        case 0x48b948u: goto label_48b948;
        case 0x48b94cu: goto label_48b94c;
        case 0x48b950u: goto label_48b950;
        case 0x48b954u: goto label_48b954;
        case 0x48b958u: goto label_48b958;
        case 0x48b95cu: goto label_48b95c;
        case 0x48b960u: goto label_48b960;
        case 0x48b964u: goto label_48b964;
        case 0x48b968u: goto label_48b968;
        case 0x48b96cu: goto label_48b96c;
        case 0x48b970u: goto label_48b970;
        case 0x48b974u: goto label_48b974;
        case 0x48b978u: goto label_48b978;
        case 0x48b97cu: goto label_48b97c;
        case 0x48b980u: goto label_48b980;
        case 0x48b984u: goto label_48b984;
        case 0x48b988u: goto label_48b988;
        case 0x48b98cu: goto label_48b98c;
        case 0x48b990u: goto label_48b990;
        case 0x48b994u: goto label_48b994;
        case 0x48b998u: goto label_48b998;
        case 0x48b99cu: goto label_48b99c;
        case 0x48b9a0u: goto label_48b9a0;
        case 0x48b9a4u: goto label_48b9a4;
        case 0x48b9a8u: goto label_48b9a8;
        case 0x48b9acu: goto label_48b9ac;
        default: break;
    }

    ctx->pc = 0x48b6d0u;

label_48b6d0:
    // 0x48b6d0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x48b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_48b6d4:
    // 0x48b6d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48b6d8:
    // 0x48b6d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48b6dc:
    // 0x48b6dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48b6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48b6e0:
    // 0x48b6e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48b6e4:
    // 0x48b6e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b6e8:
    // 0x48b6e8: 0xafa402d0  sw          $a0, 0x2D0($sp)
    ctx->pc = 0x48b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 4));
label_48b6ec:
    // 0x48b6ec: 0xafa502e0  sw          $a1, 0x2E0($sp)
    ctx->pc = 0x48b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 5));
label_48b6f0:
    // 0x48b6f0: 0xafa602f0  sw          $a2, 0x2F0($sp)
    ctx->pc = 0x48b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 6));
label_48b6f4:
    // 0x48b6f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48b6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b6f8:
    // 0x48b6f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48b6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b6fc:
    // 0x48b6fc: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b700:
    // 0x48b700: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_48b704:
    if (ctx->pc == 0x48B704u) {
        ctx->pc = 0x48B708u;
        goto label_48b708;
    }
    ctx->pc = 0x48B700u;
    {
        const bool branch_taken_0x48b700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b700) {
            ctx->pc = 0x48B71Cu;
            goto label_48b71c;
        }
    }
    ctx->pc = 0x48B708u;
label_48b708:
    // 0x48b708: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b70c:
    // 0x48b70c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_48b710:
    if (ctx->pc == 0x48B710u) {
        ctx->pc = 0x48B714u;
        goto label_48b714;
    }
    ctx->pc = 0x48B70Cu;
    {
        const bool branch_taken_0x48b70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b70c) {
            ctx->pc = 0x48B71Cu;
            goto label_48b71c;
        }
    }
    ctx->pc = 0x48B714u;
label_48b714:
    // 0x48b714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b718:
    // 0x48b718: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x48b718u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b71c:
    // 0x48b71c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_48b720:
    if (ctx->pc == 0x48B720u) {
        ctx->pc = 0x48B724u;
        goto label_48b724;
    }
    ctx->pc = 0x48B71Cu;
    {
        const bool branch_taken_0x48b71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b71c) {
            ctx->pc = 0x48B738u;
            goto label_48b738;
        }
    }
    ctx->pc = 0x48B724u;
label_48b724:
    // 0x48b724: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x48b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_48b728:
    // 0x48b728: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_48b72c:
    if (ctx->pc == 0x48B72Cu) {
        ctx->pc = 0x48B730u;
        goto label_48b730;
    }
    ctx->pc = 0x48B728u;
    {
        const bool branch_taken_0x48b728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b728) {
            ctx->pc = 0x48B738u;
            goto label_48b738;
        }
    }
    ctx->pc = 0x48B730u;
label_48b730:
    // 0x48b730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b734:
    // 0x48b734: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x48b734u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b738:
    // 0x48b738: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48b738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_48b73c:
    // 0x48b73c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_48b740:
    if (ctx->pc == 0x48B740u) {
        ctx->pc = 0x48B744u;
        goto label_48b744;
    }
    ctx->pc = 0x48B73Cu;
    {
        const bool branch_taken_0x48b73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b73c) {
            ctx->pc = 0x48B7E8u;
            goto label_48b7e8;
        }
    }
    ctx->pc = 0x48B744u;
label_48b744:
    // 0x48b744: 0x8f83b63c  lw          $v1, -0x49C4($gp)
    ctx->pc = 0x48b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948412)));
label_48b748:
    // 0x48b748: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_48b74c:
    if (ctx->pc == 0x48B74Cu) {
        ctx->pc = 0x48B750u;
        goto label_48b750;
    }
    ctx->pc = 0x48B748u;
    {
        const bool branch_taken_0x48b748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b748) {
            ctx->pc = 0x48B7E8u;
            goto label_48b7e8;
        }
    }
    ctx->pc = 0x48B750u;
label_48b750:
    // 0x48b750: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48b750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48b754:
    // 0x48b754: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b758:
    // 0x48b758: 0x27a602b8  addiu       $a2, $sp, 0x2B8
    ctx->pc = 0x48b758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_48b75c:
    // 0x48b75c: 0xc115ee8  jal         func_457BA0
label_48b760:
    if (ctx->pc == 0x48B760u) {
        ctx->pc = 0x48B764u;
        goto label_48b764;
    }
    ctx->pc = 0x48B75Cu;
    SET_GPR_U32(ctx, 31, 0x48B764u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48B75Cu, 0x48B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B764u;
label_48b764:
    // 0x48b764: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48b768:
    if (ctx->pc == 0x48B768u) {
        ctx->pc = 0x48B76Cu;
        goto label_48b76c;
    }
    ctx->pc = 0x48B764u;
    {
        const bool branch_taken_0x48b764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b764) {
            ctx->pc = 0x48B7E8u;
            goto label_48b7e8;
        }
    }
    ctx->pc = 0x48B76Cu;
label_48b76c:
    // 0x48b76c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x48b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48b770:
    // 0x48b770: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_48b774:
    if (ctx->pc == 0x48B774u) {
        ctx->pc = 0x48B778u;
        goto label_48b778;
    }
    ctx->pc = 0x48B770u;
    {
        const bool branch_taken_0x48b770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b770) {
            ctx->pc = 0x48B7E8u;
            goto label_48b7e8;
        }
    }
    ctx->pc = 0x48B778u;
label_48b778:
    // 0x48b778: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b77c:
    // 0x48b77c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b780:
    // 0x48b780: 0x8fa602bc  lw          $a2, 0x2BC($sp)
    ctx->pc = 0x48b780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_48b784:
    // 0x48b784: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48b784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48b788:
    // 0x48b788: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48b78c:
    // 0x48b78c: 0x2408022e  addiu       $t0, $zero, 0x22E
    ctx->pc = 0x48b78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
label_48b790:
    // 0x48b790: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48b790u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48b794:
    // 0x48b794: 0x25294840  addiu       $t1, $t1, 0x4840
    ctx->pc = 0x48b794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18496));
label_48b798:
    // 0x48b798: 0xc113940  jal         func_44E500
label_48b79c:
    if (ctx->pc == 0x48B79Cu) {
        ctx->pc = 0x48B7A0u;
        goto label_48b7a0;
    }
    ctx->pc = 0x48B798u;
    SET_GPR_U32(ctx, 31, 0x48B7A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48B798u, 0x48B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B7A0u;
label_48b7a0:
    // 0x48b7a0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b7a4:
    // 0x48b7a4: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48b7a8:
    // 0x48b7a8: 0xc115c24  jal         func_457090
label_48b7ac:
    if (ctx->pc == 0x48B7ACu) {
        ctx->pc = 0x48B7B0u;
        goto label_48b7b0;
    }
    ctx->pc = 0x48B7A8u;
    SET_GPR_U32(ctx, 31, 0x48B7B0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48B7A8u, 0x48B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B7B0u;
label_48b7b0:
    // 0x48b7b0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b7b4:
    // 0x48b7b4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48b7b8:
    // 0x48b7b8: 0x40f809  jalr        $v0
label_48b7bc:
    if (ctx->pc == 0x48B7BCu) {
        ctx->pc = 0x48B7C0u;
        goto label_48b7c0;
    }
    ctx->pc = 0x48B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B7C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B7B8u, 0x48B7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B7C0u;
label_48b7c0:
    // 0x48b7c0: 0xaf82b63c  sw          $v0, -0x49C4($gp)
    ctx->pc = 0x48b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948412), GPR_U32(ctx, 2));
label_48b7c4:
    // 0x48b7c4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48b7c8:
    // 0x48b7c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48b7cc:
    if (ctx->pc == 0x48B7CCu) {
        ctx->pc = 0x48B7D0u;
        goto label_48b7d0;
    }
    ctx->pc = 0x48B7C8u;
    {
        const bool branch_taken_0x48b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b7c8) {
            ctx->pc = 0x48B7D8u;
            goto label_48b7d8;
        }
    }
    ctx->pc = 0x48B7D0u;
label_48b7d0:
    // 0x48b7d0: 0xd  break       0
    ctx->pc = 0x48b7d0u;
    runtime->handleBreak(rdram, ctx);
label_48b7d4:
    // 0x48b7d4: 0x0  nop
    ctx->pc = 0x48b7d4u;
    // NOP
label_48b7d8:
    // 0x48b7d8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x48b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48b7dc:
    // 0x48b7dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b7e0:
    // 0x48b7e0: 0xc11392c  jal         func_44E4B0
label_48b7e4:
    if (ctx->pc == 0x48B7E4u) {
        ctx->pc = 0x48B7E8u;
        goto label_48b7e8;
    }
    ctx->pc = 0x48B7E0u;
    SET_GPR_U32(ctx, 31, 0x48B7E8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48B7E0u, 0x48B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B7E8u;
label_48b7e8:
    // 0x48b7e8: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b7ec:
    // 0x48b7ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_48b7f0:
    if (ctx->pc == 0x48B7F0u) {
        ctx->pc = 0x48B7F4u;
        goto label_48b7f4;
    }
    ctx->pc = 0x48B7ECu;
    {
        const bool branch_taken_0x48b7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b7ec) {
            ctx->pc = 0x48B80Cu;
            goto label_48b80c;
        }
    }
    ctx->pc = 0x48B7F4u;
label_48b7f4:
    // 0x48b7f4: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b7f8:
    // 0x48b7f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_48b7fc:
    if (ctx->pc == 0x48B7FCu) {
        ctx->pc = 0x48B800u;
        goto label_48b800;
    }
    ctx->pc = 0x48B7F8u;
    {
        const bool branch_taken_0x48b7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b7f8) {
            ctx->pc = 0x48B80Cu;
            goto label_48b80c;
        }
    }
    ctx->pc = 0x48B800u;
label_48b800:
    // 0x48b800: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x48b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_48b804:
    // 0x48b804: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_48b808:
    if (ctx->pc == 0x48B808u) {
        ctx->pc = 0x48B80Cu;
        goto label_48b80c;
    }
    ctx->pc = 0x48B804u;
    {
        const bool branch_taken_0x48b804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b804) {
            ctx->pc = 0x48B814u;
            goto label_48b814;
        }
    }
    ctx->pc = 0x48B80Cu;
label_48b80c:
    // 0x48b80c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_48b810:
    if (ctx->pc == 0x48B810u) {
        ctx->pc = 0x48B814u;
        goto label_48b814;
    }
    ctx->pc = 0x48B80Cu;
    {
        const bool branch_taken_0x48b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b80c) {
            ctx->pc = 0x48B98Cu;
            goto label_48b98c;
        }
    }
    ctx->pc = 0x48B814u;
label_48b814:
    // 0x48b814: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x48b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b818:
    // 0x48b818: 0x8c700060  lw          $s0, 0x60($v1)
    ctx->pc = 0x48b818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_48b81c:
    // 0x48b81c: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x48b81cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_48b820:
    // 0x48b820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x48b820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b824:
    // 0x48b824: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_48b828:
    if (ctx->pc == 0x48B828u) {
        ctx->pc = 0x48B82Cu;
        goto label_48b82c;
    }
    ctx->pc = 0x48B824u;
    {
        const bool branch_taken_0x48b824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b824) {
            ctx->pc = 0x48B8D0u;
            goto label_48b8d0;
        }
    }
    ctx->pc = 0x48B82Cu;
label_48b82c:
    // 0x48b82c: 0x8f83b640  lw          $v1, -0x49C0($gp)
    ctx->pc = 0x48b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948416)));
label_48b830:
    // 0x48b830: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_48b834:
    if (ctx->pc == 0x48B834u) {
        ctx->pc = 0x48B838u;
        goto label_48b838;
    }
    ctx->pc = 0x48B830u;
    {
        const bool branch_taken_0x48b830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b830) {
            ctx->pc = 0x48B8D0u;
            goto label_48b8d0;
        }
    }
    ctx->pc = 0x48B838u;
label_48b838:
    // 0x48b838: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48b83c:
    // 0x48b83c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b840:
    // 0x48b840: 0x27a602a8  addiu       $a2, $sp, 0x2A8
    ctx->pc = 0x48b840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_48b844:
    // 0x48b844: 0xc115ee8  jal         func_457BA0
label_48b848:
    if (ctx->pc == 0x48B848u) {
        ctx->pc = 0x48B84Cu;
        goto label_48b84c;
    }
    ctx->pc = 0x48B844u;
    SET_GPR_U32(ctx, 31, 0x48B84Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48B844u, 0x48B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B84Cu;
label_48b84c:
    // 0x48b84c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48b850:
    if (ctx->pc == 0x48B850u) {
        ctx->pc = 0x48B854u;
        goto label_48b854;
    }
    ctx->pc = 0x48B84Cu;
    {
        const bool branch_taken_0x48b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b84c) {
            ctx->pc = 0x48B8D0u;
            goto label_48b8d0;
        }
    }
    ctx->pc = 0x48B854u;
label_48b854:
    // 0x48b854: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x48b854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48b858:
    // 0x48b858: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_48b85c:
    if (ctx->pc == 0x48B85Cu) {
        ctx->pc = 0x48B860u;
        goto label_48b860;
    }
    ctx->pc = 0x48B858u;
    {
        const bool branch_taken_0x48b858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b858) {
            ctx->pc = 0x48B8D0u;
            goto label_48b8d0;
        }
    }
    ctx->pc = 0x48B860u;
label_48b860:
    // 0x48b860: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b864:
    // 0x48b864: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48b868:
    // 0x48b868: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x48b868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_48b86c:
    // 0x48b86c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48b870:
    // 0x48b870: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48b870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48b874:
    // 0x48b874: 0x24080234  addiu       $t0, $zero, 0x234
    ctx->pc = 0x48b874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
label_48b878:
    // 0x48b878: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48b878u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48b87c:
    // 0x48b87c: 0x25294890  addiu       $t1, $t1, 0x4890
    ctx->pc = 0x48b87cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18576));
label_48b880:
    // 0x48b880: 0xc113940  jal         func_44E500
label_48b884:
    if (ctx->pc == 0x48B884u) {
        ctx->pc = 0x48B888u;
        goto label_48b888;
    }
    ctx->pc = 0x48B880u;
    SET_GPR_U32(ctx, 31, 0x48B888u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48B880u, 0x48B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B888u;
label_48b888:
    // 0x48b888: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b88c:
    // 0x48b88c: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48b890:
    // 0x48b890: 0xc115c24  jal         func_457090
label_48b894:
    if (ctx->pc == 0x48B894u) {
        ctx->pc = 0x48B898u;
        goto label_48b898;
    }
    ctx->pc = 0x48B890u;
    SET_GPR_U32(ctx, 31, 0x48B898u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48B890u, 0x48B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B898u;
label_48b898:
    // 0x48b898: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b89c:
    // 0x48b89c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x48b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48b8a0:
    // 0x48b8a0: 0x40f809  jalr        $v0
label_48b8a4:
    if (ctx->pc == 0x48B8A4u) {
        ctx->pc = 0x48B8A8u;
        goto label_48b8a8;
    }
    ctx->pc = 0x48B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B8A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B8A0u, 0x48B8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B8A8u;
label_48b8a8:
    // 0x48b8a8: 0xaf82b640  sw          $v0, -0x49C0($gp)
    ctx->pc = 0x48b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948416), GPR_U32(ctx, 2));
label_48b8ac:
    // 0x48b8ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_48b8b0:
    // 0x48b8b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48b8b4:
    if (ctx->pc == 0x48B8B4u) {
        ctx->pc = 0x48B8B8u;
        goto label_48b8b8;
    }
    ctx->pc = 0x48B8B0u;
    {
        const bool branch_taken_0x48b8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b8b0) {
            ctx->pc = 0x48B8C0u;
            goto label_48b8c0;
        }
    }
    ctx->pc = 0x48B8B8u;
label_48b8b8:
    // 0x48b8b8: 0xd  break       0
    ctx->pc = 0x48b8b8u;
    runtime->handleBreak(rdram, ctx);
label_48b8bc:
    // 0x48b8bc: 0x0  nop
    ctx->pc = 0x48b8bcu;
    // NOP
label_48b8c0:
    // 0x48b8c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_48b8c4:
    // 0x48b8c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b8c8:
    // 0x48b8c8: 0xc11392c  jal         func_44E4B0
label_48b8cc:
    if (ctx->pc == 0x48B8CCu) {
        ctx->pc = 0x48B8D0u;
        goto label_48b8d0;
    }
    ctx->pc = 0x48B8C8u;
    SET_GPR_U32(ctx, 31, 0x48B8D0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48B8C8u, 0x48B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B8D0u;
label_48b8d0:
    // 0x48b8d0: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_48b8d4:
    if (ctx->pc == 0x48B8D4u) {
        ctx->pc = 0x48B8D8u;
        goto label_48b8d8;
    }
    ctx->pc = 0x48B8D0u;
    {
        const bool branch_taken_0x48b8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b8d0) {
            ctx->pc = 0x48B98Cu;
            goto label_48b98c;
        }
    }
    ctx->pc = 0x48B8D8u;
label_48b8d8:
    // 0x48b8d8: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x48b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_48b8dc:
    // 0x48b8dc: 0x27a20298  addiu       $v0, $sp, 0x298
    ctx->pc = 0x48b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_48b8e0:
    // 0x48b8e0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x48b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48b8e4:
    // 0x48b8e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x48b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b8e8:
    // 0x48b8e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x48b8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b8ec:
    // 0x48b8ec: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x48b8ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_48b8f0:
    // 0x48b8f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x48b8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_48b8f4:
    // 0x48b8f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x48b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_48b8f8:
    // 0x48b8f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x48b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48b8fc:
    // 0x48b8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48b8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b900:
    // 0x48b900: 0x0  nop
    ctx->pc = 0x48b900u;
    // NOP
label_48b904:
    // 0x48b904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48b904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_48b908:
    // 0x48b908: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_48b90c:
    // 0x48b90c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x48b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_48b910:
    // 0x48b910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48b910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b914:
    // 0x48b914: 0x0  nop
    ctx->pc = 0x48b914u;
    // NOP
label_48b918:
    // 0x48b918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48b918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_48b91c:
    // 0x48b91c: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_48b920:
    // 0x48b920: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x48b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48b924:
    // 0x48b924: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x48b924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_48b928:
    // 0x48b928: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x48b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_48b92c:
    // 0x48b92c: 0x27a50298  addiu       $a1, $sp, 0x298
    ctx->pc = 0x48b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_48b930:
    // 0x48b930: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48b930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48b934:
    // 0x48b934: 0xc104d64  jal         func_413590
label_48b938:
    if (ctx->pc == 0x48B938u) {
        ctx->pc = 0x48B93Cu;
        goto label_48b93c;
    }
    ctx->pc = 0x48B934u;
    SET_GPR_U32(ctx, 31, 0x48B93Cu);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x48B934u, 0x48B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B93Cu;
label_48b93c:
    // 0x48b93c: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x48b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b940:
    // 0x48b940: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x48b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b944:
    // 0x48b944: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x48b944u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_48b948:
    // 0x48b948: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x48b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b94c:
    // 0x48b94c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48b94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_48b950:
    // 0x48b950: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x48b950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_48b954:
    // 0x48b954: 0xc7a1028c  lwc1        $f1, 0x28C($sp)
    ctx->pc = 0x48b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b958:
    // 0x48b958: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x48b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b95c:
    // 0x48b95c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x48b95cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_48b960:
    // 0x48b960: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x48b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b964:
    // 0x48b964: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48b964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_48b968:
    // 0x48b968: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x48b968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_48b96c:
    // 0x48b96c: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x48b96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b970:
    // 0x48b970: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x48b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_48b974:
    // 0x48b974: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x48b974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_48b978:
    // 0x48b978: 0xc7a102c8  lwc1        $f1, 0x2C8($sp)
    ctx->pc = 0x48b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b97c:
    // 0x48b97c: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x48b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b980:
    // 0x48b980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48b980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48b984:
    // 0x48b984: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x48b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_48b988:
    // 0x48b988: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x48b988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_48b98c:
    // 0x48b98c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48b98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48b990:
    // 0x48b990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b994:
    // 0x48b994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48b994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b998:
    // 0x48b998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48b998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b99c:
    // 0x48b99c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48b9a0:
    // 0x48b9a0: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x48b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_48b9a4:
    // 0x48b9a4: 0x3e00008  jr          $ra
label_48b9a8:
    if (ctx->pc == 0x48B9A8u) {
        ctx->pc = 0x48B9ACu;
        goto label_48b9ac;
    }
    ctx->pc = 0x48B9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B9ACu;
label_48b9ac:
    // 0x48b9ac: 0x0  nop
    ctx->pc = 0x48b9acu;
    // NOP
    ctx->pc = 0x48b9b0u;
}
