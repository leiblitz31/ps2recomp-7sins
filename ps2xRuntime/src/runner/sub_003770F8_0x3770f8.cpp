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

// Function: sub_003770F8
// Address: 0x3770f8 - 0x3771b0
void sub_003770F8_0x3770f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003770F8_0x3770f8");
#endif

    switch (ctx->pc) {
        case 0x37711cu: goto label_37711c;
        case 0x377148u: goto label_377148;
        case 0x377150u: goto label_377150;
        case 0x377164u: goto label_377164;
        case 0x377184u: goto label_377184;
        default: break;
    }

    ctx->pc = 0x3770f8u;

    // 0x3770f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3770f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3770fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3770fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x377100: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x377100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x377104: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x377104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x377108: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x377108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x37710c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x377110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377114: 0xc0ddcba  jal         func_3772E8
    ctx->pc = 0x377114u;
    SET_GPR_U32(ctx, 31, 0x37711Cu);
    ctx->pc = 0x377118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377114u;
    // 0x377118: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3772E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3772E8u, 0x377114u, 0x37711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37711Cu;
label_37711c:
    // 0x37711c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37711cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x377120: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x377120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377124: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x377124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x377128: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x377128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C434u));
    // 0x37712c: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x37712cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x377130: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x377130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x377134: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x377134u;
    {
        const bool branch_taken_0x377134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x377138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377134u;
        // 0x377138: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377134) {
            ctx->pc = 0x377168u;
            goto label_377168;
        }
    }
    ctx->pc = 0x37713Cu;
    // 0x37713c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37713Cu;
    {
        const bool branch_taken_0x37713c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x377140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37713Cu;
        // 0x377140: 0x26330024  addiu       $s3, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37713c) {
            ctx->pc = 0x37715Cu;
            goto label_37715c;
        }
    }
    ctx->pc = 0x377144u;
    // 0x377144: 0x0  nop
    ctx->pc = 0x377144u;
    // NOP
label_377148:
    // 0x377148: 0xc0ddfae  jal         func_377EB8
    ctx->pc = 0x377148u;
    SET_GPR_U32(ctx, 31, 0x377150u);
    ctx->pc = 0x37714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377148u;
    // 0x37714c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x377148u, 0x377150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377150u;
label_377150:
    // 0x377150: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x377150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x377154: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x377154u;
    {
        const bool branch_taken_0x377154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x377154) {
            ctx->pc = 0x377148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377148;
        }
    }
    ctx->pc = 0x37715Cu;
label_37715c:
    // 0x37715c: 0xc0de08c  jal         func_378230
    ctx->pc = 0x37715Cu;
    SET_GPR_U32(ctx, 31, 0x377164u);
    ctx->pc = 0x377160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37715Cu;
    // 0x377160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378230u, 0x37715Cu, 0x377164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377164u;
label_377164:
    // 0x377164: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x377164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_377168:
    // 0x377168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x377168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37716c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37716Cu;
    {
        const bool branch_taken_0x37716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37716Cu;
        // 0x377170: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37716c) {
            ctx->pc = 0x377188u;
            goto label_377188;
        }
    }
    ctx->pc = 0x377174u;
    // 0x377174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377178: 0x24a578f0  addiu       $a1, $a1, 0x78F0
    ctx->pc = 0x377178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30960));
    // 0x37717c: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x37717Cu;
    SET_GPR_U32(ctx, 31, 0x377184u);
    ctx->pc = 0x377180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37717Cu;
    // 0x377180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x37717Cu, 0x377184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377184u;
label_377184:
    // 0x377184: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x377184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_377188:
    // 0x377188: 0xae80c430  sw          $zero, -0x3BD0($s4)
    ctx->pc = 0x377188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294951984), GPR_U32(ctx, 0));
    // 0x37718c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37718cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377190: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x377190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377194: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x377194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377198: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x377198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37719c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37719cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3771a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3771a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3771a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3771a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3771a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3771A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3771ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3771A8u;
        // 0x3771ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3771A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3771B0u;
}
