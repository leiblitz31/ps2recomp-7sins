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

// Function: sub_002A28E0
// Address: 0x2a28e0 - 0x2a2be0
void sub_002A28E0_0x2a28e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A28E0_0x2a28e0");
#endif

    switch (ctx->pc) {
        case 0x2a28fcu: goto label_2a28fc;
        case 0x2a290cu: goto label_2a290c;
        case 0x2a291cu: goto label_2a291c;
        case 0x2a292cu: goto label_2a292c;
        case 0x2a293cu: goto label_2a293c;
        case 0x2a2948u: goto label_2a2948;
        case 0x2a2958u: goto label_2a2958;
        case 0x2a299cu: goto label_2a299c;
        case 0x2a29b8u: goto label_2a29b8;
        case 0x2a29d4u: goto label_2a29d4;
        case 0x2a29f0u: goto label_2a29f0;
        case 0x2a2a0cu: goto label_2a2a0c;
        case 0x2a2a28u: goto label_2a2a28;
        case 0x2a2a44u: goto label_2a2a44;
        case 0x2a2a60u: goto label_2a2a60;
        case 0x2a2a7cu: goto label_2a2a7c;
        case 0x2a2a98u: goto label_2a2a98;
        case 0x2a2ab4u: goto label_2a2ab4;
        case 0x2a2accu: goto label_2a2acc;
        case 0x2a2ad8u: goto label_2a2ad8;
        case 0x2a2ae4u: goto label_2a2ae4;
        case 0x2a2af8u: goto label_2a2af8;
        case 0x2a2b04u: goto label_2a2b04;
        case 0x2a2b14u: goto label_2a2b14;
        case 0x2a2b28u: goto label_2a2b28;
        case 0x2a2b38u: goto label_2a2b38;
        case 0x2a2b4cu: goto label_2a2b4c;
        case 0x2a2b58u: goto label_2a2b58;
        case 0x2a2b68u: goto label_2a2b68;
        case 0x2a2b7cu: goto label_2a2b7c;
        case 0x2a2b90u: goto label_2a2b90;
        case 0x2a2ba0u: goto label_2a2ba0;
        case 0x2a2bbcu: goto label_2a2bbc;
        case 0x2a2bc8u: goto label_2a2bc8;
        default: break;
    }

    ctx->pc = 0x2a28e0u;

    // 0x2a28e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2a28e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2a28e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a28e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a28e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a28e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a28ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a28ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a28f0: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x2a28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x2a28f4: 0xc107150  jal         func_41C540
    ctx->pc = 0x2A28F4u;
    SET_GPR_U32(ctx, 31, 0x2A28FCu);
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x2A28F4u, 0x2A28FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28FCu;
label_2a28fc:
    // 0x2a28fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a2900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2904: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A2904u;
    SET_GPR_U32(ctx, 31, 0x2A290Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A2904u, 0x2A290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A290Cu;
label_2a290c:
    // 0x2a290c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2a290cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2a2910: 0x2484da10  addiu       $a0, $a0, -0x25F0
    ctx->pc = 0x2a2910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    // 0x2a2914: 0xc107156  jal         func_41C558
    ctx->pc = 0x2A2914u;
    SET_GPR_U32(ctx, 31, 0x2A291Cu);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x2A2914u, 0x2A291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A291Cu;
label_2a291c:
    // 0x2a291c: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2920: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a2920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2924: 0xc0a8af8  jal         func_2A2BE0
    ctx->pc = 0x2A2924u;
    SET_GPR_U32(ctx, 31, 0x2A292Cu);
    ctx->pc = 0x2A2BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2BE0u, 0x2A2924u, 0x2A292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A292Cu;
label_2a292c:
    // 0x2a292c: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2930: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a2930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2934: 0xc0a8af8  jal         func_2A2BE0
    ctx->pc = 0x2A2934u;
    SET_GPR_U32(ctx, 31, 0x2A293Cu);
    ctx->pc = 0x2A2BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2BE0u, 0x2A2934u, 0x2A293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A293Cu;
label_2a293c:
    // 0x2a293c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2940: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2A2940u;
    {
        const bool branch_taken_0x2a2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2940) {
            ctx->pc = 0x2A2BA4u;
            goto label_2a2ba4;
        }
    }
    ctx->pc = 0x2A2948u;
label_2a2948:
    // 0x2a2948: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a294c: 0x2785a3c8  addiu       $a1, $gp, -0x5C38
    ctx->pc = 0x2a294cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943688));
    // 0x2a2950: 0xc040304  jal         func_100C10
    ctx->pc = 0x2A2950u;
    SET_GPR_U32(ctx, 31, 0x2A2958u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2A2950u, 0x2A2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2958u;
label_2a2958:
    // 0x2a2958: 0x26020007  addiu       $v0, $s0, 0x7
    ctx->pc = 0x2a2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2a295c: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x2a295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x2a2960: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x2a2960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2a2964: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A2964u;
    {
        const bool branch_taken_0x2a2964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2964) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A296Cu;
    // 0x2a296c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a2970: 0x24638bc0  addiu       $v1, $v1, -0x7440
    ctx->pc = 0x2a2970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937536));
    // 0x2a2974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a297c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2980: 0x400008  jr          $v0
    ctx->pc = 0x2A2980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2988u: goto label_2a2988;
            case 0x2A29A4u: goto label_2a29a4;
            case 0x2A29C0u: goto label_2a29c0;
            case 0x2A29DCu: goto label_2a29dc;
            case 0x2A29F8u: goto label_2a29f8;
            case 0x2A2A14u: goto label_2a2a14;
            case 0x2A2A30u: goto label_2a2a30;
            case 0x2A2A4Cu: goto label_2a2a4c;
            case 0x2A2A68u: goto label_2a2a68;
            case 0x2A2A84u: goto label_2a2a84;
            case 0x2A2AA0u: goto label_2a2aa0;
            case 0x2A2ABCu: goto label_2a2abc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2980u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A2988u;
label_2a2988:
    // 0x2a2988: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a298c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a298cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2990: 0x24a5da40  addiu       $a1, $a1, -0x25C0
    ctx->pc = 0x2a2990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957632));
    // 0x2a2994: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2994u;
    SET_GPR_U32(ctx, 31, 0x2A299Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2994u, 0x2A299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A299Cu;
label_2a299c:
    // 0x2a299c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2A299Cu;
    {
        const bool branch_taken_0x2a299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a299c) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A29A4u;
label_2a29a4:
    // 0x2a29a4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a29a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a29ac: 0x24a5da58  addiu       $a1, $a1, -0x25A8
    ctx->pc = 0x2a29acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957656));
    // 0x2a29b0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A29B0u;
    SET_GPR_U32(ctx, 31, 0x2A29B8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A29B0u, 0x2A29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29B8u;
label_2a29b8:
    // 0x2a29b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2A29B8u;
    {
        const bool branch_taken_0x2a29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a29b8) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A29C0u;
label_2a29c0:
    // 0x2a29c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a29c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a29c8: 0x24a5da68  addiu       $a1, $a1, -0x2598
    ctx->pc = 0x2a29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957672));
    // 0x2a29cc: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A29CCu;
    SET_GPR_U32(ctx, 31, 0x2A29D4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A29CCu, 0x2A29D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29D4u;
label_2a29d4:
    // 0x2a29d4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2A29D4u;
    {
        const bool branch_taken_0x2a29d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a29d4) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A29DCu;
label_2a29dc:
    // 0x2a29dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a29e0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a29e4: 0x24a5da80  addiu       $a1, $a1, -0x2580
    ctx->pc = 0x2a29e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957696));
    // 0x2a29e8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A29E8u;
    SET_GPR_U32(ctx, 31, 0x2A29F0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A29E8u, 0x2A29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29F0u;
label_2a29f0:
    // 0x2a29f0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2A29F0u;
    {
        const bool branch_taken_0x2a29f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a29f0) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A29F8u;
label_2a29f8:
    // 0x2a29f8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a29f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a29fc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2a00: 0x24a5da90  addiu       $a1, $a1, -0x2570
    ctx->pc = 0x2a2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957712));
    // 0x2a2a04: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2A04u;
    SET_GPR_U32(ctx, 31, 0x2A2A0Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2A04u, 0x2A2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A0Cu;
label_2a2a0c:
    // 0x2a2a0c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2A2A0Cu;
    {
        const bool branch_taken_0x2a2a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a0c) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2A14u;
label_2a2a14:
    // 0x2a2a14: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2a18: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a2a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2a1c: 0x24a5daa0  addiu       $a1, $a1, -0x2560
    ctx->pc = 0x2a2a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957728));
    // 0x2a2a20: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2A20u;
    SET_GPR_U32(ctx, 31, 0x2A2A28u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2A20u, 0x2A2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A28u;
label_2a2a28:
    // 0x2a2a28: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2A2A28u;
    {
        const bool branch_taken_0x2a2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a28) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2A30u;
label_2a2a30:
    // 0x2a2a30: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2a34: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a2a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2a38: 0x24a5dac0  addiu       $a1, $a1, -0x2540
    ctx->pc = 0x2a2a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957760));
    // 0x2a2a3c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A44u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2A3Cu, 0x2A2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A44u;
label_2a2a44:
    // 0x2a2a44: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A2A44u;
    {
        const bool branch_taken_0x2a2a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a44) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2A4Cu;
label_2a2a4c:
    // 0x2a2a4c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2a50: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a2a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2a54: 0x24a5dad0  addiu       $a1, $a1, -0x2530
    ctx->pc = 0x2a2a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
    // 0x2a2a58: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2A58u;
    SET_GPR_U32(ctx, 31, 0x2A2A60u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2A58u, 0x2A2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A60u;
label_2a2a60:
    // 0x2a2a60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A2A60u;
    {
        const bool branch_taken_0x2a2a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a60) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2A68u;
label_2a2a68:
    // 0x2a2a68: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2a6c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2a70: 0x24a5dae0  addiu       $a1, $a1, -0x2520
    ctx->pc = 0x2a2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957792));
    // 0x2a2a74: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2A74u;
    SET_GPR_U32(ctx, 31, 0x2A2A7Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2A74u, 0x2A2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A7Cu;
label_2a2a7c:
    // 0x2a2a7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A2A7Cu;
    {
        const bool branch_taken_0x2a2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a7c) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2A84u;
label_2a2a84:
    // 0x2a2a84: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2a88: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2a8c: 0x24a5daf0  addiu       $a1, $a1, -0x2510
    ctx->pc = 0x2a2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957808));
    // 0x2a2a90: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2A90u;
    SET_GPR_U32(ctx, 31, 0x2A2A98u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2A90u, 0x2A2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A98u;
label_2a2a98:
    // 0x2a2a98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A2A98u;
    {
        const bool branch_taken_0x2a2a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a98) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2AA0u;
label_2a2aa0:
    // 0x2a2aa0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2aa4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a2aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a2aa8: 0x24a5db00  addiu       $a1, $a1, -0x2500
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957824));
    // 0x2a2aac: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2AACu;
    SET_GPR_U32(ctx, 31, 0x2A2AB4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2AACu, 0x2A2AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AB4u;
label_2a2ab4:
    // 0x2a2ab4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2AB4u;
    {
        const bool branch_taken_0x2a2ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ab4) {
            ctx->pc = 0x2A2ACCu;
            goto label_2a2acc;
        }
    }
    ctx->pc = 0x2A2ABCu;
label_2a2abc:
    // 0x2a2abc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ac4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2A2AC4u;
    SET_GPR_U32(ctx, 31, 0x2A2ACCu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2A2AC4u, 0x2A2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2ACCu;
label_2a2acc:
    // 0x2a2acc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a2accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a2ad0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2A2AD0u;
    SET_GPR_U32(ctx, 31, 0x2A2AD8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2A2AD0u, 0x2A2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AD8u;
label_2a2ad8:
    // 0x2a2ad8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2adc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2A2ADCu;
    SET_GPR_U32(ctx, 31, 0x2A2AE4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2A2ADCu, 0x2A2AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AE4u;
label_2a2ae4:
    // 0x2a2ae4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a2ae8: 0x2785a3d0  addiu       $a1, $gp, -0x5C30
    ctx->pc = 0x2a2ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943696));
    // 0x2a2aec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a2aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2af0: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x2A2AF0u;
    SET_GPR_U32(ctx, 31, 0x2A2AF8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x2A2AF0u, 0x2A2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AF8u;
label_2a2af8:
    // 0x2a2af8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a2afc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2A2AFCu;
    SET_GPR_U32(ctx, 31, 0x2A2B04u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2A2AFCu, 0x2A2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B04u;
label_2a2b04:
    // 0x2a2b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b0c: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x2A2B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2B14u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x2A2B0Cu, 0x2A2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B14u;
label_2a2b14:
    // 0x2a2b14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b18: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b20: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2B20u;
    SET_GPR_U32(ctx, 31, 0x2A2B28u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2B20u, 0x2A2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B28u;
label_2a2b28:
    // 0x2a2b28: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2a2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a2b2c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2b30: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2A2B30u;
    SET_GPR_U32(ctx, 31, 0x2A2B38u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2A2B30u, 0x2A2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B38u;
label_2a2b38:
    // 0x2a2b38: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a2b3c: 0x2785a3d8  addiu       $a1, $gp, -0x5C28
    ctx->pc = 0x2a2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943704));
    // 0x2a2b40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a2b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b44: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x2A2B44u;
    SET_GPR_U32(ctx, 31, 0x2A2B4Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x2A2B44u, 0x2A2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B4Cu;
label_2a2b4c:
    // 0x2a2b4c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a2b50: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2A2B50u;
    SET_GPR_U32(ctx, 31, 0x2A2B58u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2A2B50u, 0x2A2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B58u;
label_2a2b58:
    // 0x2a2b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b60: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x2A2B60u;
    SET_GPR_U32(ctx, 31, 0x2A2B68u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x2A2B60u, 0x2A2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B68u;
label_2a2b68:
    // 0x2a2b68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b6c: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b74: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2B74u;
    SET_GPR_U32(ctx, 31, 0x2A2B7Cu);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2B74u, 0x2A2B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B7Cu;
label_2a2b7c:
    // 0x2a2b7c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2a2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a2b80: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a2b84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a2b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2b88: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A2B88u;
    SET_GPR_U32(ctx, 31, 0x2A2B90u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A2B88u, 0x2A2B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B90u;
label_2a2b90:
    // 0x2a2b90: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a2b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a2b94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2b98: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A2B98u;
    SET_GPR_U32(ctx, 31, 0x2A2BA0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A2B98u, 0x2A2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BA0u;
label_2a2ba0:
    // 0x2a2ba0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a2ba4:
    // 0x2a2ba4: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x2a2ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2a2ba8: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x2A2BA8u;
    {
        const bool branch_taken_0x2a2ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ba8) {
            ctx->pc = 0x2A2948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2948;
        }
    }
    ctx->pc = 0x2A2BB0u;
    // 0x2a2bb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2bb4: 0xc107156  jal         func_41C558
    ctx->pc = 0x2A2BB4u;
    SET_GPR_U32(ctx, 31, 0x2A2BBCu);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x2A2BB4u, 0x2A2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BBCu;
label_2a2bbc:
    // 0x2a2bbc: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2a2bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a2bc0: 0xc0a8b4c  jal         func_2A2D30
    ctx->pc = 0x2A2BC0u;
    SET_GPR_U32(ctx, 31, 0x2A2BC8u);
    ctx->pc = 0x2A2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D30u, 0x2A2BC0u, 0x2A2BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BC8u;
label_2a2bc8:
    // 0x2a2bc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2bcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2bd4: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x2a2bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2a2bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2BE0u;
}
