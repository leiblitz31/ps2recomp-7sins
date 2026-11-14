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

// Function: sub_00259920
// Address: 0x259920 - 0x259b90
void sub_00259920_0x259920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259920_0x259920");
#endif

    switch (ctx->pc) {
        case 0x25997cu: goto label_25997c;
        case 0x259990u: goto label_259990;
        case 0x2599b0u: goto label_2599b0;
        case 0x2599bcu: goto label_2599bc;
        case 0x2599d0u: goto label_2599d0;
        case 0x2599dcu: goto label_2599dc;
        case 0x2599f0u: goto label_2599f0;
        case 0x259a08u: goto label_259a08;
        case 0x259a24u: goto label_259a24;
        case 0x259a38u: goto label_259a38;
        case 0x259a4cu: goto label_259a4c;
        case 0x259a60u: goto label_259a60;
        case 0x259a74u: goto label_259a74;
        case 0x259a88u: goto label_259a88;
        case 0x259a9cu: goto label_259a9c;
        case 0x259ab0u: goto label_259ab0;
        case 0x259ac4u: goto label_259ac4;
        case 0x259ad8u: goto label_259ad8;
        case 0x259aecu: goto label_259aec;
        case 0x259b00u: goto label_259b00;
        case 0x259b14u: goto label_259b14;
        case 0x259b28u: goto label_259b28;
        case 0x259b3cu: goto label_259b3c;
        case 0x259b4cu: goto label_259b4c;
        case 0x259b6cu: goto label_259b6c;
        default: break;
    }

    ctx->pc = 0x259920u;

    // 0x259920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x259924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x259928: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x259928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25992c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259930: 0x3e00008  jr          $ra
    ctx->pc = 0x259930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259938u;
    // 0x259938: 0x0  nop
    ctx->pc = 0x259938u;
    // NOP
    // 0x25993c: 0x0  nop
    ctx->pc = 0x25993cu;
    // NOP
    // 0x259940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25994c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25994cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x259950: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x259950u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x259954: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259958: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x259958u;
    {
        const bool branch_taken_0x259958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259958) {
            ctx->pc = 0x259B6Cu;
            goto label_259b6c;
        }
    }
    ctx->pc = 0x259960u;
    // 0x259960: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x259960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x259964: 0x24635900  addiu       $v1, $v1, 0x5900
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22784));
    // 0x259968: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25996c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25996cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x259970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259974: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x259974u;
    {
        const bool branch_taken_0x259974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259974) {
            ctx->pc = 0x2599F8u;
            goto label_2599f8;
        }
    }
    ctx->pc = 0x25997Cu;
label_25997c:
    // 0x25997c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259980: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x259980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x259984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259988: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x259988u;
    SET_GPR_U32(ctx, 31, 0x259990u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x259988u, 0x259990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259990u;
label_259990:
    // 0x259990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259994: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x259994u;
    {
        const bool branch_taken_0x259994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259994) {
            ctx->pc = 0x2599F4u;
            goto label_2599f4;
        }
    }
    ctx->pc = 0x25999Cu;
    // 0x25999c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2599a0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x2599a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x2599a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599a8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2599A8u;
    SET_GPR_U32(ctx, 31, 0x2599B0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2599A8u, 0x2599B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599B0u;
label_2599b0:
    // 0x2599b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2599b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2599b4: 0xc0966f4  jal         func_259BD0
    ctx->pc = 0x2599B4u;
    SET_GPR_U32(ctx, 31, 0x2599BCu);
    ctx->pc = 0x259BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BD0u, 0x2599B4u, 0x2599BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599BCu;
label_2599bc:
    // 0x2599bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2599bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2599c0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x2599c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x2599c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2599c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599c8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2599C8u;
    SET_GPR_U32(ctx, 31, 0x2599D0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2599C8u, 0x2599D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599D0u;
label_2599d0:
    // 0x2599d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2599d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2599d4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2599D4u;
    SET_GPR_U32(ctx, 31, 0x2599DCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2599D4u, 0x2599DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599DCu;
label_2599dc:
    // 0x2599dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2599dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2599e0: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x2599e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x2599e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2599e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599e8: 0xc0966fc  jal         func_259BF0
    ctx->pc = 0x2599E8u;
    SET_GPR_U32(ctx, 31, 0x2599F0u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2599E8u, 0x2599F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599F0u;
label_2599f0:
    // 0x2599f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2599f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2599f4:
    // 0x2599f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2599f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2599f8:
    // 0x2599f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2599f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2599fc: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x2599fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x259a00: 0xc0966e4  jal         func_259B90
    ctx->pc = 0x259A00u;
    SET_GPR_U32(ctx, 31, 0x259A08u);
    ctx->pc = 0x259B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B90u, 0x259A00u, 0x259A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A08u;
label_259a08:
    // 0x259a08: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x259a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x259a0c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x259A0Cu;
    {
        const bool branch_taken_0x259a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259a0c) {
            ctx->pc = 0x25997Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25997c;
        }
    }
    ctx->pc = 0x259A14u;
    // 0x259a14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a18: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x259a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x259a1c: 0xc096384  jal         func_258E10
    ctx->pc = 0x259A1Cu;
    SET_GPR_U32(ctx, 31, 0x259A24u);
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x259A1Cu, 0x259A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A24u;
label_259a24:
    // 0x259a24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a28: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x259a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x259a2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a30: 0xc096038  jal         func_2580E0
    ctx->pc = 0x259A30u;
    SET_GPR_U32(ctx, 31, 0x259A38u);
    ctx->pc = 0x2580E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2580E0u, 0x259A30u, 0x259A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A38u;
label_259a38:
    // 0x259a38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a3c: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x259a40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a44: 0xc0960c0  jal         func_258300
    ctx->pc = 0x259A44u;
    SET_GPR_U32(ctx, 31, 0x259A4Cu);
    ctx->pc = 0x258300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258300u, 0x259A44u, 0x259A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A4Cu;
label_259a4c:
    // 0x259a4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a50: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x259a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x259a54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a58: 0xc096160  jal         func_258580
    ctx->pc = 0x259A58u;
    SET_GPR_U32(ctx, 31, 0x259A60u);
    ctx->pc = 0x258580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258580u, 0x259A58u, 0x259A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A60u;
label_259a60:
    // 0x259a60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a64: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x259a68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a6c: 0xc096200  jal         func_258800
    ctx->pc = 0x259A6Cu;
    SET_GPR_U32(ctx, 31, 0x259A74u);
    ctx->pc = 0x258800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258800u, 0x259A6Cu, 0x259A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A74u;
label_259a74:
    // 0x259a74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a78: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x259a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x259a7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a80: 0xc096218  jal         func_258860
    ctx->pc = 0x259A80u;
    SET_GPR_U32(ctx, 31, 0x259A88u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x259A80u, 0x259A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A88u;
label_259a88:
    // 0x259a88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a8c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x259a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x259a90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259a94: 0xc060ee8  jal         func_183BA0
    ctx->pc = 0x259A94u;
    SET_GPR_U32(ctx, 31, 0x259A9Cu);
    ctx->pc = 0x183BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183BA0u, 0x259A94u, 0x259A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A9Cu;
label_259a9c:
    // 0x259a9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259aa0: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x259aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x259aa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259aa8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x259AA8u;
    SET_GPR_U32(ctx, 31, 0x259AB0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x259AA8u, 0x259AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AB0u;
label_259ab0:
    // 0x259ab0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259ab4: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x259ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x259ab8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259abc: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x259ABCu;
    SET_GPR_U32(ctx, 31, 0x259AC4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x259ABCu, 0x259AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AC4u;
label_259ac4:
    // 0x259ac4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259ac8: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x259ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x259acc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259ad0: 0xc096218  jal         func_258860
    ctx->pc = 0x259AD0u;
    SET_GPR_U32(ctx, 31, 0x259AD8u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x259AD0u, 0x259AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AD8u;
label_259ad8:
    // 0x259ad8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259adc: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x259adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x259ae0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259ae4: 0xc096218  jal         func_258860
    ctx->pc = 0x259AE4u;
    SET_GPR_U32(ctx, 31, 0x259AECu);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x259AE4u, 0x259AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AECu;
label_259aec:
    // 0x259aec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259af0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x259af4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259af8: 0xc096218  jal         func_258860
    ctx->pc = 0x259AF8u;
    SET_GPR_U32(ctx, 31, 0x259B00u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x259AF8u, 0x259B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B00u;
label_259b00:
    // 0x259b00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259b04: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x259b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x259b08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259b0c: 0xc096218  jal         func_258860
    ctx->pc = 0x259B0Cu;
    SET_GPR_U32(ctx, 31, 0x259B14u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x259B0Cu, 0x259B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B14u;
label_259b14:
    // 0x259b14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259b18: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x259b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x259b1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259b20: 0xc096218  jal         func_258860
    ctx->pc = 0x259B20u;
    SET_GPR_U32(ctx, 31, 0x259B28u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x259B20u, 0x259B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B28u;
label_259b28:
    // 0x259b28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259b2c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x259b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x259b30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259b34: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x259B34u;
    SET_GPR_U32(ctx, 31, 0x259B3Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x259B34u, 0x259B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B3Cu;
label_259b3c:
    // 0x259b3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x259b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b44: 0xc091188  jal         func_244620
    ctx->pc = 0x259B44u;
    SET_GPR_U32(ctx, 31, 0x259B4Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x259B44u, 0x259B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B4Cu;
label_259b4c:
    // 0x259b4c: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x259b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259b50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259b58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B58u;
    {
        const bool branch_taken_0x259b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x259b58) {
            ctx->pc = 0x259B6Cu;
            goto label_259b6c;
        }
    }
    ctx->pc = 0x259B60u;
    // 0x259b60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259b64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x259B64u;
    SET_GPR_U32(ctx, 31, 0x259B6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x259B64u, 0x259B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B6Cu;
label_259b6c:
    // 0x259b6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259b78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x259b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x259b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x259B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259B84u;
    // 0x259b84: 0x0  nop
    ctx->pc = 0x259b84u;
    // NOP
    // 0x259b88: 0x0  nop
    ctx->pc = 0x259b88u;
    // NOP
    // 0x259b8c: 0x0  nop
    ctx->pc = 0x259b8cu;
    // NOP
    ctx->pc = 0x259b90u;
}
