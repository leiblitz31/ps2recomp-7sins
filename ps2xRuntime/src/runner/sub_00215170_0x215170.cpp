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

// Function: sub_00215170
// Address: 0x215170 - 0x2151e0
void sub_00215170_0x215170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215170_0x215170");
#endif

    switch (ctx->pc) {
        case 0x215170u: goto label_215170;
        case 0x215174u: goto label_215174;
        case 0x215178u: goto label_215178;
        case 0x21517cu: goto label_21517c;
        case 0x215180u: goto label_215180;
        case 0x215184u: goto label_215184;
        case 0x215188u: goto label_215188;
        case 0x21518cu: goto label_21518c;
        case 0x215190u: goto label_215190;
        case 0x215194u: goto label_215194;
        case 0x215198u: goto label_215198;
        case 0x21519cu: goto label_21519c;
        case 0x2151a0u: goto label_2151a0;
        case 0x2151a4u: goto label_2151a4;
        case 0x2151a8u: goto label_2151a8;
        case 0x2151acu: goto label_2151ac;
        case 0x2151b0u: goto label_2151b0;
        case 0x2151b4u: goto label_2151b4;
        case 0x2151b8u: goto label_2151b8;
        case 0x2151bcu: goto label_2151bc;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151c4u: goto label_2151c4;
        case 0x2151c8u: goto label_2151c8;
        case 0x2151ccu: goto label_2151cc;
        case 0x2151d0u: goto label_2151d0;
        case 0x2151d4u: goto label_2151d4;
        case 0x2151d8u: goto label_2151d8;
        case 0x2151dcu: goto label_2151dc;
        default: break;
    }

    ctx->pc = 0x215170u;

label_215170:
    // 0x215170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x215170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_215174:
    // 0x215174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_215178:
    // 0x215178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21517c:
    // 0x21517c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_215180:
    // 0x215180: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x215180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_215184:
    // 0x215184: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x215184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_215188:
    // 0x215188: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x215188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_21518c:
    // 0x21518c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215190:
    // 0x215190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215194:
    // 0x215194: 0xc085478  jal         func_2151E0
label_215198:
    if (ctx->pc == 0x215198u) {
        ctx->pc = 0x21519Cu;
        goto label_21519c;
    }
    ctx->pc = 0x215194u;
    SET_GPR_U32(ctx, 31, 0x21519Cu);
    ctx->pc = 0x2151E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2151E0u, 0x215194u, 0x21519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21519Cu;
label_21519c:
    // 0x21519c: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x21519cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
label_2151a0:
    // 0x2151a0: 0x26104d40  addiu       $s0, $s0, 0x4D40
    ctx->pc = 0x2151a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19776));
label_2151a4:
    // 0x2151a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2151a8:
    // 0x2151a8: 0x200f809  jalr        $s0
label_2151ac:
    if (ctx->pc == 0x2151ACu) {
        ctx->pc = 0x2151B0u;
        goto label_2151b0;
    }
    ctx->pc = 0x2151A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2151B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2151A8u, 0x2151B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2151B0u;
label_2151b0:
    // 0x2151b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2151b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2151b4:
    // 0x2151b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2151b8:
    // 0x2151b8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2151bc:
    // 0x2151bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2151bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2151c0:
    // 0x2151c0: 0xc08529c  jal         func_214A70
label_2151c4:
    if (ctx->pc == 0x2151C4u) {
        ctx->pc = 0x2151C8u;
        goto label_2151c8;
    }
    ctx->pc = 0x2151C0u;
    SET_GPR_U32(ctx, 31, 0x2151C8u);
    ctx->pc = 0x214A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A70u, 0x2151C0u, 0x2151C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151C8u;
label_2151c8:
    // 0x2151c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2151c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2151cc:
    // 0x2151cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2151ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2151d0:
    // 0x2151d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2151d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2151d4:
    // 0x2151d4: 0x3e00008  jr          $ra
label_2151d8:
    if (ctx->pc == 0x2151D8u) {
        ctx->pc = 0x2151DCu;
        goto label_2151dc;
    }
    ctx->pc = 0x2151D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2151D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2151DCu;
label_2151dc:
    // 0x2151dc: 0x0  nop
    ctx->pc = 0x2151dcu;
    // NOP
    ctx->pc = 0x2151e0u;
}
