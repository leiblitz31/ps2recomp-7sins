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

// Function: sub_00188980
// Address: 0x188980 - 0x188c50
void sub_00188980_0x188980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188980_0x188980");
#endif

    switch (ctx->pc) {
        case 0x1889ecu: goto label_1889ec;
        case 0x188a00u: goto label_188a00;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a20u: goto label_188a20;
        case 0x188a34u: goto label_188a34;
        case 0x188a48u: goto label_188a48;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a70u: goto label_188a70;
        case 0x188a80u: goto label_188a80;
        case 0x188a90u: goto label_188a90;
        case 0x188aacu: goto label_188aac;
        case 0x188abcu: goto label_188abc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae8u: goto label_188ae8;
        case 0x188afcu: goto label_188afc;
        case 0x188b1cu: goto label_188b1c;
        case 0x188b40u: goto label_188b40;
        case 0x188b50u: goto label_188b50;
        case 0x188b60u: goto label_188b60;
        case 0x188b74u: goto label_188b74;
        case 0x188b94u: goto label_188b94;
        case 0x188ba8u: goto label_188ba8;
        case 0x188bb4u: goto label_188bb4;
        case 0x188bccu: goto label_188bcc;
        case 0x188be0u: goto label_188be0;
        case 0x188bf4u: goto label_188bf4;
        case 0x188c08u: goto label_188c08;
        case 0x188c18u: goto label_188c18;
        case 0x188c28u: goto label_188c28;
        default: break;
    }

    ctx->pc = 0x188980u;

    // 0x188980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x188984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x188988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18898c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188994: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x188994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x188998: 0x8f84bae4  lw          $a0, -0x451C($gp)
    ctx->pc = 0x188998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x18899c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1889a0: 0x10830071  beq         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x188B68u;
            goto label_188b68;
        }
    }
    ctx->pc = 0x1889A8u;
    // 0x1889a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1889a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1889ac: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1889ACu;
    {
        const bool branch_taken_0x1889ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1889ac) {
            ctx->pc = 0x1889C4u;
            goto label_1889c4;
        }
    }
    ctx->pc = 0x1889B4u;
    // 0x1889b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889B4u;
    {
        const bool branch_taken_0x1889b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889b4) {
            ctx->pc = 0x1889C4u;
            goto label_1889c4;
        }
    }
    ctx->pc = 0x1889BCu;
    // 0x1889bc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1889BCu;
    {
        const bool branch_taken_0x1889bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889bc) {
            ctx->pc = 0x188C28u;
            goto label_188c28;
        }
    }
    ctx->pc = 0x1889C4u;
label_1889c4:
    // 0x1889c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1889c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1889c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1889c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1889cc: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x1889ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x1889d0: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1889d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1889d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1889d8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1889D8u;
    {
        const bool branch_taken_0x1889d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889d8) {
            ctx->pc = 0x188A98u;
            goto label_188a98;
        }
    }
    ctx->pc = 0x1889E0u;
    // 0x1889e0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1889e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1889e4: 0xc042330  jal         func_108CC0
    ctx->pc = 0x1889E4u;
    SET_GPR_U32(ctx, 31, 0x1889ECu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x1889E4u, 0x1889ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889ECu;
label_1889ec:
    // 0x1889ec: 0x8f86bae4  lw          $a2, -0x451C($gp)
    ctx->pc = 0x1889ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x1889f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1889f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1889f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889f8: 0xc08d114  jal         func_234450
    ctx->pc = 0x1889F8u;
    SET_GPR_U32(ctx, 31, 0x188A00u);
    ctx->pc = 0x234450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234450u, 0x1889F8u, 0x188A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A00u;
label_188a00:
    // 0x188a00: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a04: 0xc088560  jal         func_221580
    ctx->pc = 0x188A04u;
    SET_GPR_U32(ctx, 31, 0x188A0Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x188A04u, 0x188A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A0Cu;
label_188a0c:
    // 0x188a0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a10: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x188a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x188a14: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188a18: 0xc040924  jal         func_102490
    ctx->pc = 0x188A18u;
    SET_GPR_U32(ctx, 31, 0x188A20u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188A18u, 0x188A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A20u;
label_188a20:
    // 0x188a20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a24: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
    // 0x188a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a2c: 0xc040924  jal         func_102490
    ctx->pc = 0x188A2Cu;
    SET_GPR_U32(ctx, 31, 0x188A34u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188A2Cu, 0x188A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A34u;
label_188a34:
    // 0x188a34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a38: 0x24050564  addiu       $a1, $zero, 0x564
    ctx->pc = 0x188a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
    // 0x188a3c: 0x8f86bae4  lw          $a2, -0x451C($gp)
    ctx->pc = 0x188a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188a40: 0xc040924  jal         func_102490
    ctx->pc = 0x188A40u;
    SET_GPR_U32(ctx, 31, 0x188A48u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188A40u, 0x188A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A48u;
label_188a48:
    // 0x188a48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a4c: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x188a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    // 0x188a50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x188a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188a54: 0xc040924  jal         func_102490
    ctx->pc = 0x188A54u;
    SET_GPR_U32(ctx, 31, 0x188A5Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188A54u, 0x188A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A5Cu;
label_188a5c:
    // 0x188a5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a60: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x188a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
    // 0x188a64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188a68: 0xc041b54  jal         func_106D50
    ctx->pc = 0x188A68u;
    SET_GPR_U32(ctx, 31, 0x188A70u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x188A68u, 0x188A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A70u;
label_188a70:
    // 0x188a70: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x188a74: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x188a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a78: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x188A78u;
    SET_GPR_U32(ctx, 31, 0x188A80u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x188A78u, 0x188A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A80u;
label_188a80:
    // 0x188a80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x188a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188a84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188a88: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x188A88u;
    SET_GPR_U32(ctx, 31, 0x188A90u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x188A88u, 0x188A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A90u;
label_188a90:
    // 0x188a90: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x188A90u;
    {
        const bool branch_taken_0x188a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a90) {
            ctx->pc = 0x188C28u;
            goto label_188c28;
        }
    }
    ctx->pc = 0x188A98u;
label_188a98:
    // 0x188a98: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x188a9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188aa0: 0x24a55298  addiu       $a1, $a1, 0x5298
    ctx->pc = 0x188aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21144));
    // 0x188aa4: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x188AA4u;
    SET_GPR_U32(ctx, 31, 0x188AACu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x188AA4u, 0x188AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AACu;
label_188aac:
    // 0x188aac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x188aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x188ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ab4: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x188AB4u;
    SET_GPR_U32(ctx, 31, 0x188ABCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x188AB4u, 0x188ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188ABCu;
label_188abc:
    // 0x188abc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x188abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x188ac0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188ac4: 0x24a552b0  addiu       $a1, $a1, 0x52B0
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21168));
    // 0x188ac8: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x188AC8u;
    SET_GPR_U32(ctx, 31, 0x188AD0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x188AC8u, 0x188AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AD0u;
label_188ad0:
    // 0x188ad0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ad8: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x188AD8u;
    SET_GPR_U32(ctx, 31, 0x188AE0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x188AD8u, 0x188AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AE0u;
label_188ae0:
    // 0x188ae0: 0xc05548c  jal         func_155230
    ctx->pc = 0x188AE0u;
    SET_GPR_U32(ctx, 31, 0x188AE8u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x188AE0u, 0x188AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AE8u;
label_188ae8:
    // 0x188ae8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x188ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188af0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x188af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x188af4: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x188AF4u;
    SET_GPR_U32(ctx, 31, 0x188AFCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x188AF4u, 0x188AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AFCu;
label_188afc:
    // 0x188afc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b00: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x188b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188b04: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x188b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188b08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x188b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188b0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188b10: 0x24a552d0  addiu       $a1, $a1, 0x52D0
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
    // 0x188b14: 0xc119600  jal         func_465800
    ctx->pc = 0x188B14u;
    SET_GPR_U32(ctx, 31, 0x188B1Cu);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x188B14u, 0x188B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B1Cu;
label_188b1c:
    // 0x188b1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x188b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x188b20: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x188b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188b24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x188b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x188b28: 0x34460101  ori         $a2, $v0, 0x101
    ctx->pc = 0x188b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x188b2c: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x188b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x188b30: 0x24e78fc0  addiu       $a3, $a3, -0x7040
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938560));
    // 0x188b34: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188b38: 0xc08d218  jal         func_234860
    ctx->pc = 0x188B38u;
    SET_GPR_U32(ctx, 31, 0x188B40u);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x188B38u, 0x188B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B40u;
label_188b40:
    // 0x188b40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188b44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188b48: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x188B48u;
    SET_GPR_U32(ctx, 31, 0x188B50u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x188B48u, 0x188B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B50u;
label_188b50:
    // 0x188b50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x188b54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188b58: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x188B58u;
    SET_GPR_U32(ctx, 31, 0x188B60u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x188B58u, 0x188B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B60u;
label_188b60:
    // 0x188b60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x188B60u;
    {
        const bool branch_taken_0x188b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b60) {
            ctx->pc = 0x188C28u;
            goto label_188c28;
        }
    }
    ctx->pc = 0x188B68u;
label_188b68:
    // 0x188b68: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x188b6c: 0xc042330  jal         func_108CC0
    ctx->pc = 0x188B6Cu;
    SET_GPR_U32(ctx, 31, 0x188B74u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x188B6Cu, 0x188B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B74u;
label_188b74:
    // 0x188b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b78: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x188B78u;
    {
        const bool branch_taken_0x188b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b78) {
            ctx->pc = 0x188BA8u;
            goto label_188ba8;
        }
    }
    ctx->pc = 0x188B80u;
    // 0x188b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188b88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188b8c: 0xc08d114  jal         func_234450
    ctx->pc = 0x188B8Cu;
    SET_GPR_U32(ctx, 31, 0x188B94u);
    ctx->pc = 0x234450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234450u, 0x188B8Cu, 0x188B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B94u;
label_188b94:
    // 0x188b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ba0: 0xc08d124  jal         func_234490
    ctx->pc = 0x188BA0u;
    SET_GPR_U32(ctx, 31, 0x188BA8u);
    ctx->pc = 0x234490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234490u, 0x188BA0u, 0x188BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BA8u;
label_188ba8:
    // 0x188ba8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188bac: 0xc088560  jal         func_221580
    ctx->pc = 0x188BACu;
    SET_GPR_U32(ctx, 31, 0x188BB4u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x188BACu, 0x188BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BB4u;
label_188bb4:
    // 0x188bb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188bb8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188bbc: 0x24a552e0  addiu       $a1, $a1, 0x52E0
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21216));
    // 0x188bc0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x188bc4: 0xc041b24  jal         func_106C90
    ctx->pc = 0x188BC4u;
    SET_GPR_U32(ctx, 31, 0x188BCCu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x188BC4u, 0x188BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BCCu;
label_188bcc:
    // 0x188bcc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188bd0: 0x278591a0  addiu       $a1, $gp, -0x6E60
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939040));
    // 0x188bd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188bd8: 0xc047314  jal         func_11CC50
    ctx->pc = 0x188BD8u;
    SET_GPR_U32(ctx, 31, 0x188BE0u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x188BD8u, 0x188BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BE0u;
label_188be0:
    // 0x188be0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188be4: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x188be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
    // 0x188be8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188bec: 0xc040924  jal         func_102490
    ctx->pc = 0x188BECu;
    SET_GPR_U32(ctx, 31, 0x188BF4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188BECu, 0x188BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BF4u;
label_188bf4:
    // 0x188bf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188bf8: 0x24050564  addiu       $a1, $zero, 0x564
    ctx->pc = 0x188bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
    // 0x188bfc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188c00: 0xc040924  jal         func_102490
    ctx->pc = 0x188C00u;
    SET_GPR_U32(ctx, 31, 0x188C08u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x188C00u, 0x188C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C08u;
label_188c08:
    // 0x188c08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x188c0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x188c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188c10: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x188C10u;
    SET_GPR_U32(ctx, 31, 0x188C18u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x188C10u, 0x188C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C18u;
label_188c18:
    // 0x188c18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x188c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x188c1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188c20: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x188C20u;
    SET_GPR_U32(ctx, 31, 0x188C28u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x188C20u, 0x188C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C28u;
label_188c28:
    // 0x188c28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188c2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188c38: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x188c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x188C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188C44u;
    // 0x188c44: 0x0  nop
    ctx->pc = 0x188c44u;
    // NOP
    // 0x188c48: 0x0  nop
    ctx->pc = 0x188c48u;
    // NOP
    // 0x188c4c: 0x0  nop
    ctx->pc = 0x188c4cu;
    // NOP
    ctx->pc = 0x188c50u;
}
