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

// Function: sub_0046F130
// Address: 0x46f130 - 0x46f210
void sub_0046F130_0x46f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F130_0x46f130");
#endif

    switch (ctx->pc) {
        case 0x46f158u: goto label_46f158;
        case 0x46f180u: goto label_46f180;
        case 0x46f1c8u: goto label_46f1c8;
        default: break;
    }

    ctx->pc = 0x46f130u;

    // 0x46f130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46f134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46f134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46f138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46f13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46f140: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46f140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46f144: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x46f144u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x46f148: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x46f148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x46f14c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f150: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x46F150u;
    SET_GPR_U32(ctx, 31, 0x46F158u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x46F150u, 0x46F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F158u;
label_46f158:
    // 0x46f158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46f158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f15c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46f160: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x46f160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46f164: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x46F164u;
    {
        const bool branch_taken_0x46f164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f164) {
            ctx->pc = 0x46F170u;
            goto label_46f170;
        }
    }
    ctx->pc = 0x46F16Cu;
    // 0x46f16c: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x46f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_46f170:
    // 0x46f170: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x46f170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x46f174: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f178: 0xc11939c  jal         func_464E70
    ctx->pc = 0x46F178u;
    SET_GPR_U32(ctx, 31, 0x46F180u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x46F178u, 0x46F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F180u;
label_46f180:
    // 0x46f180: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46f184: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x46f184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46f188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46f18c: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x46f18cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x46f190: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f194: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46f198: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x46f198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x46f19c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46f1a0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x46f1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46f1a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f1a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46f1ac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x46f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x46f1b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x46f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46f1b4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x46f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46f1b8: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x46f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x46f1bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46f1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f1c0: 0xc0bb7a4  jal         func_2EDE90
    ctx->pc = 0x46F1C0u;
    SET_GPR_U32(ctx, 31, 0x46F1C8u);
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x46F1C0u, 0x46F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F1C8u;
label_46f1c8:
    // 0x46f1c8: 0x97a60040  lhu         $a2, 0x40($sp)
    ctx->pc = 0x46f1c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46f1cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f1d0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x46f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46f1d4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x46f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x46f1d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x46f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46f1dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x46f1e0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x46f1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x46f1e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f1e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x46f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x46f1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46f1f0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x46f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x46f1f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46f1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46f1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46f1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f200: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46f204: 0x3e00008  jr          $ra
    ctx->pc = 0x46F204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F20Cu;
    // 0x46f20c: 0x0  nop
    ctx->pc = 0x46f20cu;
    // NOP
    ctx->pc = 0x46f210u;
}
