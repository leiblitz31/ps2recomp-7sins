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

// Function: sub_004A5890
// Address: 0x4a5890 - 0x4a5be0
void sub_004A5890_0x4a5890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5890_0x4a5890");
#endif

    switch (ctx->pc) {
        case 0x4a58dcu: goto label_4a58dc;
        case 0x4a58ecu: goto label_4a58ec;
        case 0x4a58fcu: goto label_4a58fc;
        case 0x4a590cu: goto label_4a590c;
        case 0x4a591cu: goto label_4a591c;
        case 0x4a592cu: goto label_4a592c;
        case 0x4a5948u: goto label_4a5948;
        case 0x4a5958u: goto label_4a5958;
        case 0x4a5968u: goto label_4a5968;
        case 0x4a5978u: goto label_4a5978;
        case 0x4a5988u: goto label_4a5988;
        case 0x4a59f4u: goto label_4a59f4;
        case 0x4a5a14u: goto label_4a5a14;
        case 0x4a5a58u: goto label_4a5a58;
        case 0x4a5a6cu: goto label_4a5a6c;
        case 0x4a5a80u: goto label_4a5a80;
        case 0x4a5a94u: goto label_4a5a94;
        case 0x4a5aa8u: goto label_4a5aa8;
        case 0x4a5abcu: goto label_4a5abc;
        case 0x4a5adcu: goto label_4a5adc;
        case 0x4a5af0u: goto label_4a5af0;
        case 0x4a5b04u: goto label_4a5b04;
        case 0x4a5b18u: goto label_4a5b18;
        case 0x4a5b2cu: goto label_4a5b2c;
        case 0x4a5b98u: goto label_4a5b98;
        case 0x4a5ba0u: goto label_4a5ba0;
        default: break;
    }

    ctx->pc = 0x4a5890u;

    // 0x4a5890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a5890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a5894: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a5894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4a5898: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a5898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4a589c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a589cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a58a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4a58a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a58a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a58a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4a58ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4a58acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58b0: 0x10c00060  beqz        $a2, . + 4 + (0x60 << 2)
    ctx->pc = 0x4A58B0u;
    {
        const bool branch_taken_0x4a58b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58B0u;
        // 0x4a58b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a58b0) {
            ctx->pc = 0x4A5A34u;
            goto label_4a5a34;
        }
    }
    ctx->pc = 0x4A58B8u;
    // 0x4a58b8: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x4A58B8u;
    {
        const bool branch_taken_0x4a58b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A58B8u;
        // 0x4a58bc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a58b8) {
            ctx->pc = 0x4A5998u;
            goto label_4a5998;
        }
    }
    ctx->pc = 0x4A58C0u;
    // 0x4a58c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a58c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a58c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a58c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a58ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a58d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4a58d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a58d4: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A58D4u;
    SET_GPR_U32(ctx, 31, 0x4A58DCu);
    ctx->pc = 0x4A58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A58D4u;
    // 0x4a58d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A58D4u, 0x4A58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A58DCu;
label_4a58dc:
    // 0x4a58dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a58dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58e0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x4a58e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x4a58e4: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A58E4u;
    SET_GPR_U32(ctx, 31, 0x4A58ECu);
    ctx->pc = 0x4A58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A58E4u;
    // 0x4a58e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A58E4u, 0x4A58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A58ECu;
label_4a58ec:
    // 0x4a58ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a58ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a58f0: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x4a58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4a58f4: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A58F4u;
    SET_GPR_U32(ctx, 31, 0x4A58FCu);
    ctx->pc = 0x4A58F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A58F4u;
    // 0x4a58f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A58F4u, 0x4A58FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A58FCu;
label_4a58fc:
    // 0x4a58fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a58fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5900: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x4a5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x4a5904: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5904u;
    SET_GPR_U32(ctx, 31, 0x4A590Cu);
    ctx->pc = 0x4A5908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5904u;
    // 0x4a5908: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5904u, 0x4A590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A590Cu;
label_4a590c:
    // 0x4a590c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5910: 0x2645000d  addiu       $a1, $s2, 0xD
    ctx->pc = 0x4a5910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
    // 0x4a5914: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5914u;
    SET_GPR_U32(ctx, 31, 0x4A591Cu);
    ctx->pc = 0x4A5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5914u;
    // 0x4a5918: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5914u, 0x4A591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A591Cu;
label_4a591c:
    // 0x4a591c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5924: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A5924u;
    SET_GPR_U32(ctx, 31, 0x4A592Cu);
    ctx->pc = 0x4A5928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5924u;
    // 0x4a5928: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A5924u, 0x4A592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A592Cu;
label_4a592c:
    // 0x4a592c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5934: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x4a5934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4a5938: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a5938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a593c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a5940: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5940u;
    SET_GPR_U32(ctx, 31, 0x4A5948u);
    ctx->pc = 0x4A5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5940u;
    // 0x4a5944: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5940u, 0x4A5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5948u;
label_4a5948:
    // 0x4a5948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a594c: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x4a594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4a5950: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5950u;
    SET_GPR_U32(ctx, 31, 0x4A5958u);
    ctx->pc = 0x4A5954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5950u;
    // 0x4a5954: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5950u, 0x4A5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5958u;
label_4a5958:
    // 0x4a5958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a595c: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x4a595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4a5960: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5960u;
    SET_GPR_U32(ctx, 31, 0x4A5968u);
    ctx->pc = 0x4A5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5960u;
    // 0x4a5964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5960u, 0x4A5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5968u;
label_4a5968:
    // 0x4a5968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a5968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a596c: 0x26450019  addiu       $a1, $s2, 0x19
    ctx->pc = 0x4a596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x4a5970: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5970u;
    SET_GPR_U32(ctx, 31, 0x4A5978u);
    ctx->pc = 0x4A5974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5970u;
    // 0x4a5974: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5970u, 0x4A5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5978u;
label_4a5978:
    // 0x4a5978: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a5978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a597c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5980: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A5980u;
    SET_GPR_U32(ctx, 31, 0x4A5988u);
    ctx->pc = 0x4A5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5980u;
    // 0x4a5984: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A5980u, 0x4A5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5988u;
label_4a5988:
    // 0x4a5988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a5988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a598c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a5990: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A5990u;
    {
        const bool branch_taken_0x4a5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5990u;
        // 0x4a5994: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5990) {
            ctx->pc = 0x4A59E0u;
            goto label_4a59e0;
        }
    }
    ctx->pc = 0x4A5998u;
label_4a5998:
    // 0x4a5998: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x4a5998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a599c: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x4a599cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a59a0: 0x6a45000f  ldl         $a1, 0xF($s2)
    ctx->pc = 0x4a59a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a59a4: 0x6e450008  ldr         $a1, 0x8($s2)
    ctx->pc = 0x4a59a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a59a8: 0x6a460017  ldl         $a2, 0x17($s2)
    ctx->pc = 0x4a59a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4a59ac: 0x6e460010  ldr         $a2, 0x10($s2)
    ctx->pc = 0x4a59acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4a59b0: 0x8a47001b  lwl         $a3, 0x1B($s2)
    ctx->pc = 0x4a59b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x4a59b4: 0x9a470018  lwr         $a3, 0x18($s2)
    ctx->pc = 0x4a59b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x4a59b8: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x4a59b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a59bc: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x4a59bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a59c0: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x4a59c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a59c4: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x4a59c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a59c8: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x4a59c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a59cc: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x4a59ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a59d0: 0xa887001b  swl         $a3, 0x1B($a0)
    ctx->pc = 0x4a59d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a59d4: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x4a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x4a59d8: 0xb8870018  swr         $a3, 0x18($a0)
    ctx->pc = 0x4a59d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a59dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a59e0:
    // 0x4a59e0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a59e4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A59E4u;
    {
        const bool branch_taken_0x4a59e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A59E4u;
        // 0x4a59e8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59e4) {
            ctx->pc = 0x4A5A00u;
            goto label_4a5a00;
        }
    }
    ctx->pc = 0x4A59ECu;
    // 0x4a59ec: 0xc12a4d4  jal         func_4A9350
    ctx->pc = 0x4A59ECu;
    SET_GPR_U32(ctx, 31, 0x4A59F4u);
    ctx->pc = 0x4A59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A59ECu;
    // 0x4a59f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A59ECu, 0x4A59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A59F4u;
label_4a59f4:
    // 0x4a59f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a59f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a59fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4a5a00:
    // 0x4a5a00: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x4a5a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a5a04: 0x10a0006e  beqz        $a1, . + 4 + (0x6E << 2)
    ctx->pc = 0x4A5A04u;
    {
        const bool branch_taken_0x4a5a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A04u;
        // 0x4a5a08: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a04) {
            ctx->pc = 0x4A5BC0u;
            goto label_4a5bc0;
        }
    }
    ctx->pc = 0x4A5A0Cu;
    // 0x4a5a0c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A5A0Cu;
    SET_GPR_U32(ctx, 31, 0x4A5A14u);
    ctx->pc = 0x4A5A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5A0Cu;
    // 0x4a5a10: 0x8e460014  lw          $a2, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A5A0Cu, 0x4A5A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A14u;
label_4a5a14:
    // 0x4a5a14: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x4a5a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4a5a18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5a1c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4a5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a5a20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a5a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a5a24: 0xa2420018  sb          $v0, 0x18($s2)
    ctx->pc = 0x4a5a24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x4a5a28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a5a2c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x4A5A2Cu;
    {
        const bool branch_taken_0x4a5a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A2Cu;
        // 0x4a5a30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a2c) {
            ctx->pc = 0x4A5BC0u;
            goto label_4a5bc0;
        }
    }
    ctx->pc = 0x4A5A34u;
label_4a5a34:
    // 0x4a5a34: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x4A5A34u;
    {
        const bool branch_taken_0x4a5a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5A34u;
        // 0x4a5a38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5a34) {
            ctx->pc = 0x4A5B3Cu;
            goto label_4a5b3c;
        }
    }
    ctx->pc = 0x4A5A3Cu;
    // 0x4a5a3c: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x4a5a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a5a40: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x4a5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x4a5a44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a5a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5a50: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5A50u;
    SET_GPR_U32(ctx, 31, 0x4A5A58u);
    ctx->pc = 0x4A5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5A50u;
    // 0x4a5a54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5A50u, 0x4A5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A58u;
label_4a5a58:
    // 0x4a5a58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a60: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a5a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5a64: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5A64u;
    SET_GPR_U32(ctx, 31, 0x4A5A6Cu);
    ctx->pc = 0x4A5A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5A64u;
    // 0x4a5a68: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5A64u, 0x4A5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A6Cu;
label_4a5a6c:
    // 0x4a5a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a5a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5a78: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5A78u;
    SET_GPR_U32(ctx, 31, 0x4A5A80u);
    ctx->pc = 0x4A5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5A78u;
    // 0x4a5a7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5A78u, 0x4A5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A80u;
label_4a5a80:
    // 0x4a5a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a5a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5a8c: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5A8Cu;
    SET_GPR_U32(ctx, 31, 0x4A5A94u);
    ctx->pc = 0x4A5A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5A8Cu;
    // 0x4a5a90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5A8Cu, 0x4A5A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5A94u;
label_4a5a94:
    // 0x4a5a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a5a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5aa0: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5AA0u;
    SET_GPR_U32(ctx, 31, 0x4A5AA8u);
    ctx->pc = 0x4A5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AA0u;
    // 0x4a5aa4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5AA0u, 0x4A5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5AA8u;
label_4a5aa8:
    // 0x4a5aa8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a5aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a5aac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ab4: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A5AB4u;
    SET_GPR_U32(ctx, 31, 0x4A5ABCu);
    ctx->pc = 0x4A5AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AB4u;
    // 0x4a5ab8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A5AB4u, 0x4A5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5ABCu;
label_4a5abc:
    // 0x4a5abc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5ac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ac8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a5ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5acc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a5accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a5ad0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4a5ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4a5ad4: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5AD4u;
    SET_GPR_U32(ctx, 31, 0x4A5ADCu);
    ctx->pc = 0x4A5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AD4u;
    // 0x4a5ad8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5AD4u, 0x4A5ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5ADCu;
label_4a5adc:
    // 0x4a5adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5ae4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a5ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5ae8: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5AE8u;
    SET_GPR_U32(ctx, 31, 0x4A5AF0u);
    ctx->pc = 0x4A5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AE8u;
    // 0x4a5aec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5AE8u, 0x4A5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5AF0u;
label_4a5af0:
    // 0x4a5af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5af8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a5af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5afc: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5AFCu;
    SET_GPR_U32(ctx, 31, 0x4A5B04u);
    ctx->pc = 0x4A5B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5AFCu;
    // 0x4a5b00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5AFCu, 0x4A5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5B04u;
label_4a5b04:
    // 0x4a5b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a5b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5b10: 0xc12acd0  jal         func_4AB340
    ctx->pc = 0x4A5B10u;
    SET_GPR_U32(ctx, 31, 0x4A5B18u);
    ctx->pc = 0x4A5B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5B10u;
    // 0x4a5b14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A5B10u, 0x4A5B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5B18u;
label_4a5b18:
    // 0x4a5b18: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a5b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a5b1c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b24: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A5B24u;
    SET_GPR_U32(ctx, 31, 0x4A5B2Cu);
    ctx->pc = 0x4A5B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5B24u;
    // 0x4a5b28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A5B24u, 0x4A5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5B2Cu;
label_4a5b2c:
    // 0x4a5b2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a5b30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a5b34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4A5B34u;
    {
        const bool branch_taken_0x4a5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B34u;
        // 0x4a5b38: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5b34) {
            ctx->pc = 0x4A5B80u;
            goto label_4a5b80;
        }
    }
    ctx->pc = 0x4A5B3Cu;
label_4a5b3c:
    // 0x4a5b3c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4a5b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a5b40: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4a5b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a5b44: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x4a5b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a5b48: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x4a5b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a5b4c: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x4a5b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a5b50: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x4a5b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a5b54: 0x8a25001b  lwl         $a1, 0x1B($s1)
    ctx->pc = 0x4a5b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x4a5b58: 0x9a250018  lwr         $a1, 0x18($s1)
    ctx->pc = 0x4a5b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x4a5b5c: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x4a5b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5b60: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x4a5b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5b64: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x4a5b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5b68: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x4a5b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5b6c: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x4a5b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5b70: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x4a5b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a5b74: 0xaa45001b  swl         $a1, 0x1B($s2)
    ctx->pc = 0x4a5b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a5b78: 0xba450018  swr         $a1, 0x18($s2)
    ctx->pc = 0x4a5b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x4a5b7c: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x4a5b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_4a5b80:
    // 0x4a5b80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4a5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4a5b84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A5B84u;
    {
        const bool branch_taken_0x4a5b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5B84u;
        // 0x4a5b88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5b84) {
            ctx->pc = 0x4A5BB4u;
            goto label_4a5bb4;
        }
    }
    ctx->pc = 0x4A5B8Cu;
    // 0x4a5b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5b90: 0xc12a4d4  jal         func_4A9350
    ctx->pc = 0x4A5B90u;
    SET_GPR_U32(ctx, 31, 0x4A5B98u);
    ctx->pc = 0x4A5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5B90u;
    // 0x4a5b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A5B90u, 0x4A5B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5B98u;
label_4a5b98:
    // 0x4a5b98: 0xc129850  jal         func_4A6140
    ctx->pc = 0x4A5B98u;
    SET_GPR_U32(ctx, 31, 0x4A5BA0u);
    ctx->pc = 0x4A5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5B98u;
    // 0x4a5b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6140u, 0x4A5B98u, 0x4A5BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5BA0u;
label_4a5ba0:
    // 0x4a5ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A5BA0u;
    {
        const bool branch_taken_0x4a5ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BA0u;
        // 0x4a5ba4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ba0) {
            ctx->pc = 0x4A5BB0u;
            goto label_4a5bb0;
        }
    }
    ctx->pc = 0x4A5BA8u;
    // 0x4a5ba8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A5BA8u;
    {
        const bool branch_taken_0x4a5ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BA8u;
        // 0x4a5bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ba8) {
            ctx->pc = 0x4A5BC4u;
            goto label_4a5bc4;
        }
    }
    ctx->pc = 0x4A5BB0u;
label_4a5bb0:
    // 0x4a5bb0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4a5bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a5bb4:
    // 0x4a5bb4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4a5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a5bb8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A5BB8u;
    {
        const bool branch_taken_0x4a5bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5bb8) {
            ctx->pc = 0x4A5BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5BB8u;
            // 0x4a5bbc: 0xae510010  sw          $s1, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5BC0u;
            goto label_4a5bc0;
        }
    }
    ctx->pc = 0x4A5BC0u;
label_4a5bc0:
    // 0x4a5bc0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a5bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a5bc4:
    // 0x4a5bc4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a5bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a5bc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a5bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5bcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a5bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5bd0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a5bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a5bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5BD8u;
        // 0x4a5bdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5BE0u;
}
