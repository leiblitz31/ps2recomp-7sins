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

// Function: sub_0020A900
// Address: 0x20a900 - 0x20a9d0
void sub_0020A900_0x20a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A900_0x20a900");
#endif

    switch (ctx->pc) {
        case 0x20a934u: goto label_20a934;
        case 0x20a968u: goto label_20a968;
        case 0x20a978u: goto label_20a978;
        default: break;
    }

    ctx->pc = 0x20a900u;

    // 0x20a900: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20a904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20a908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20a90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20a910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20a910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20a914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a91c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x20a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x20a920: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a928: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x20a928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20a92c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x20A92Cu;
    SET_GPR_U32(ctx, 31, 0x20A934u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x20A92Cu, 0x20A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A934u;
label_20a934:
    // 0x20a934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20a934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a938: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A938u;
    {
        const bool branch_taken_0x20a938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a938) {
            ctx->pc = 0x20A9A4u;
            goto label_20a9a4;
        }
    }
    ctx->pc = 0x20A940u;
    // 0x20a940: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a944: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20a944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20a948: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x20a948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a94c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20a94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x20a950: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x20a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20a954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a958: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20a95c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x20a95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a960: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20A960u;
    {
        const bool branch_taken_0x20a960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a960) {
            ctx->pc = 0x20A998u;
            goto label_20a998;
        }
    }
    ctx->pc = 0x20A968u;
label_20a968:
    // 0x20a968: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a96c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a970: 0xc0400e0  jal         func_100380
    ctx->pc = 0x20A970u;
    SET_GPR_U32(ctx, 31, 0x20A978u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x20A970u, 0x20A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A978u;
label_20a978:
    // 0x20a978: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x20a978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x20a97c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A97Cu;
    {
        const bool branch_taken_0x20a97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a97c) {
            ctx->pc = 0x20A990u;
            goto label_20a990;
        }
    }
    ctx->pc = 0x20A984u;
    // 0x20a984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a988: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x20a98c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20a990:
    // 0x20a990: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x20a990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x20a994: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20a994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20a998:
    // 0x20a998: 0x1654fff3  bne         $s2, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x20A998u;
    {
        const bool branch_taken_0x20a998 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x20a998) {
            ctx->pc = 0x20A968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a968;
        }
    }
    ctx->pc = 0x20A9A0u;
    // 0x20a9a0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x20a9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a9a4:
    // 0x20a9a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20a9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a9ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20a9acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20a9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20a9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a9c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20a9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A9CCu;
    // 0x20a9cc: 0x0  nop
    ctx->pc = 0x20a9ccu;
    // NOP
    ctx->pc = 0x20a9d0u;
}
