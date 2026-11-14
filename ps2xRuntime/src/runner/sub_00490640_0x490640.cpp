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

// Function: sub_00490640
// Address: 0x490640 - 0x490760
void sub_00490640_0x490640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490640_0x490640");
#endif

    switch (ctx->pc) {
        case 0x49067cu: goto label_49067c;
        default: break;
    }

    ctx->pc = 0x490640u;

    // 0x490640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x490640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x490644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x490644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x490648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x490648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49064c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x490650: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x490650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x490654: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x490654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x490658: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x490658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49065c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x49065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x490660: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x490660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490664: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x490664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490668: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x49066c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x49066cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490670: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x490670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x490674u;
    {
        const bool branch_taken_0x490674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490674) {
            ctx->pc = 0x490698u;
            goto label_490698;
        }
    }
    ctx->pc = 0x49067Cu;
label_49067c:
    // 0x49067c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x49067cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x490680: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x490680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x490684: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x490684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x490688: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x490688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x49068c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x49068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x490690: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x490690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x490694: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x490694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_490698:
    // 0x490698: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x490698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x49069c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x49069Cu;
    {
        const bool branch_taken_0x49069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49069c) {
            ctx->pc = 0x49067Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49067c;
        }
    }
    ctx->pc = 0x4906A4u;
    // 0x4906a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4906a8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4906a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4906ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4906acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4906b0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4906b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4906b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4906b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4906b8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4906b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4906bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4906c0: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x4906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x4906c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4906c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4906c8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4906cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4906ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4906d0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4906d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4906d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4906d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4906d8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4906d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4906dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4906dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4906e0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x4906e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x4906e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4906e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4906e8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4906ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4906f0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4906f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4906f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4906f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4906f8: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x4906f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x4906fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4906fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490700: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x490700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x490704: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x490704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490708: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x49070c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490710: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x490710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x490714: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x490714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490718: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x49071c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490720: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x490720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x490724: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x490724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490728: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x49072c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490730: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x490730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x490734: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x490734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490738: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x49073c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x490740: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x490740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x490744: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x490744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x490748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49074c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49074cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x490750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490754: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x490754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x490758: 0x3e00008  jr          $ra
    ctx->pc = 0x490758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490760u;
}
