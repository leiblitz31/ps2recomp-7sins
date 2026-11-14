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

// Function: sub_0025D130
// Address: 0x25d130 - 0x25d230
void sub_0025D130_0x25d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D130_0x25d130");
#endif

    switch (ctx->pc) {
        case 0x25d150u: goto label_25d150;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1e4u: goto label_25d1e4;
        case 0x25d1f4u: goto label_25d1f4;
        default: break;
    }

    ctx->pc = 0x25d130u;

    // 0x25d130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d13c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25d140: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25d140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d144: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x25d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25d148: 0xc091174  jal         func_2445D0
    ctx->pc = 0x25D148u;
    SET_GPR_U32(ctx, 31, 0x25D150u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x25D148u, 0x25D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D150u;
label_25d150:
    // 0x25d150: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25d150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25d154: 0x24635960  addiu       $v1, $v1, 0x5960
    ctx->pc = 0x25d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22880));
    // 0x25d158: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d15c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d160: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d164: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x25d164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x25d168: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d16c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x25d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x25d170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d174: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x25d174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x25d178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d17c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d180: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x25d180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x25d184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d188: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x25d188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x25d18c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d190: 0xa040006c  sb          $zero, 0x6C($v0)
    ctx->pc = 0x25d190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x25d194: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d198: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d19c: 0xc042230  jal         func_1088C0
    ctx->pc = 0x25D19Cu;
    SET_GPR_U32(ctx, 31, 0x25D1A4u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x25D19Cu, 0x25D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1A4u;
label_25d1a4:
    // 0x25d1a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1a8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d1ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d1b0: 0xc097bf8  jal         func_25EFE0
    ctx->pc = 0x25D1B0u;
    SET_GPR_U32(ctx, 31, 0x25D1B8u);
    ctx->pc = 0x25EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFE0u, 0x25D1B0u, 0x25D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1B8u;
label_25d1b8:
    // 0x25d1b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1bc: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25d1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1c4: 0xc09748c  jal         func_25D230
    ctx->pc = 0x25D1C4u;
    SET_GPR_U32(ctx, 31, 0x25D1CCu);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x25D1C4u, 0x25D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1CCu;
label_25d1cc:
    // 0x25d1cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d1d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1d4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25d1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d1dc: 0xc09748c  jal         func_25D230
    ctx->pc = 0x25D1DCu;
    SET_GPR_U32(ctx, 31, 0x25D1E4u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x25D1DCu, 0x25D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1E4u;
label_25d1e4:
    // 0x25d1e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25d1e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25d1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25D1ECu;
    {
        const bool branch_taken_0x25d1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d1ec) {
            ctx->pc = 0x25D208u;
            goto label_25d208;
        }
    }
    ctx->pc = 0x25D1F4u;
label_25d1f4:
    // 0x25d1f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25d1f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d200: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x25d200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x25d204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25d204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25d208:
    // 0x25d208: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x25d208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x25d20c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25D20Cu;
    {
        const bool branch_taken_0x25d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d20c) {
            ctx->pc = 0x25D1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d1f4;
        }
    }
    ctx->pc = 0x25D214u;
    // 0x25d214: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d220: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d224: 0x3e00008  jr          $ra
    ctx->pc = 0x25D224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D22Cu;
    // 0x25d22c: 0x0  nop
    ctx->pc = 0x25d22cu;
    // NOP
    ctx->pc = 0x25d230u;
}
