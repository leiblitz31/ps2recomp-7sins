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

// Function: sub_001C5170
// Address: 0x1c5170 - 0x1c5210
void sub_001C5170_0x1c5170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5170_0x1c5170");
#endif

    switch (ctx->pc) {
        case 0x1c51b0u: goto label_1c51b0;
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51f0u: goto label_1c51f0;
        default: break;
    }

    ctx->pc = 0x1c5170u;

    // 0x1c5170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c5174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c5178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c517c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5184: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c5184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c5188: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c518c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5190: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1c5194: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c5194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c5198: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c519c: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x1c519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x1c51a0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1c51a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c51a4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c51a8: 0xc070fd4  jal         func_1C3F50
    ctx->pc = 0x1C51A8u;
    SET_GPR_U32(ctx, 31, 0x1C51B0u);
    ctx->pc = 0x1C3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F50u, 0x1C51A8u, 0x1C51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B0u;
label_1c51b0:
    // 0x1c51b0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c51b4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C51B4u;
    {
        const bool branch_taken_0x1c51b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c51b4) {
            ctx->pc = 0x1C51CCu;
            goto label_1c51cc;
        }
    }
    ctx->pc = 0x1C51BCu;
    // 0x1c51bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c51c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c51c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C51C4u;
    {
        const bool branch_taken_0x1c51c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c51c4) {
            ctx->pc = 0x1C51DCu;
            goto label_1c51dc;
        }
    }
    ctx->pc = 0x1C51CCu;
label_1c51cc:
    // 0x1c51cc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c51d0: 0xc071484  jal         func_1C5210
    ctx->pc = 0x1C51D0u;
    SET_GPR_U32(ctx, 31, 0x1C51D8u);
    ctx->pc = 0x1C5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5210u, 0x1C51D0u, 0x1C51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51D8u;
label_1c51d8:
    // 0x1c51d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c51d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c51dc:
    // 0x1c51dc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1c51dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51e0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c51e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c51e8: 0xc070fc0  jal         func_1C3F00
    ctx->pc = 0x1C51E8u;
    SET_GPR_U32(ctx, 31, 0x1C51F0u);
    ctx->pc = 0x1C3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F00u, 0x1C51E8u, 0x1C51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F0u;
label_1c51f0:
    // 0x1c51f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c51f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c51f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c51f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c51f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c51fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c51fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5204: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c5204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5208: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5210u;
}
