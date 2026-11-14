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

// Function: sub_002DA120
// Address: 0x2da120 - 0x2da1c0
void sub_002DA120_0x2da120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA120_0x2da120");
#endif

    switch (ctx->pc) {
        case 0x2da14cu: goto label_2da14c;
        case 0x2da160u: goto label_2da160;
        case 0x2da170u: goto label_2da170;
        case 0x2da180u: goto label_2da180;
        case 0x2da1a4u: goto label_2da1a4;
        default: break;
    }

    ctx->pc = 0x2da120u;

    // 0x2da120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2da124: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2da124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2da128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da12c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da134: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2da134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2da138: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2da138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2da13c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2da13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da140: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da144: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2DA144u;
    SET_GPR_U32(ctx, 31, 0x2DA14Cu);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2DA144u, 0x2DA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA14Cu;
label_2da14c:
    // 0x2da14c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da14cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da154: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2da154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2da158: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA158u;
    SET_GPR_U32(ctx, 31, 0x2DA160u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA158u, 0x2DA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA160u;
label_2da160:
    // 0x2da160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da168: 0xc0b767c  jal         func_2DD9F0
    ctx->pc = 0x2DA168u;
    SET_GPR_U32(ctx, 31, 0x2DA170u);
    ctx->pc = 0x2DD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD9F0u, 0x2DA168u, 0x2DA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da174: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2da174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da178: 0xc0b9ebc  jal         func_2E7AF0
    ctx->pc = 0x2DA178u;
    SET_GPR_U32(ctx, 31, 0x2DA180u);
    ctx->pc = 0x2E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7AF0u, 0x2DA178u, 0x2DA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA180u;
label_2da180:
    // 0x2da180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da184: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA184u;
    {
        const bool branch_taken_0x2da184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da184) {
            ctx->pc = 0x2DA198u;
            goto label_2da198;
        }
    }
    ctx->pc = 0x2DA18Cu;
    // 0x2da18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA190u;
    {
        const bool branch_taken_0x2da190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da190) {
            ctx->pc = 0x2DA1A4u;
            goto label_2da1a4;
        }
    }
    ctx->pc = 0x2DA198u;
label_2da198:
    // 0x2da198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da19c: 0xc0b95c8  jal         func_2E5720
    ctx->pc = 0x2DA19Cu;
    SET_GPR_U32(ctx, 31, 0x2DA1A4u);
    ctx->pc = 0x2E5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5720u, 0x2DA19Cu, 0x2DA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1A4u;
label_2da1a4:
    // 0x2da1a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2da1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da1a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da1b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2da1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA1C0u;
}
