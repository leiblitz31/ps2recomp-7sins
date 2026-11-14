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

// Function: sub_00480050
// Address: 0x480050 - 0x480120
void sub_00480050_0x480050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480050_0x480050");
#endif

    switch (ctx->pc) {
        case 0x480084u: goto label_480084;
        case 0x4800b8u: goto label_4800b8;
        case 0x4800c8u: goto label_4800c8;
        default: break;
    }

    ctx->pc = 0x480050u;

    // 0x480050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x480050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x480054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x480054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x480058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x480058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48005c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x480060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x480064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x480068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48006c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x48006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x480070: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x480070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x480074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x480074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x480078: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x480078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48007c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x48007Cu;
    SET_GPR_U32(ctx, 31, 0x480084u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48007Cu, 0x480084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480084u;
label_480084:
    // 0x480084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480088: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x480088u;
    {
        const bool branch_taken_0x480088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x480088) {
            ctx->pc = 0x4800F0u;
            goto label_4800f0;
        }
    }
    ctx->pc = 0x480090u;
    // 0x480090: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x480090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x480094: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x480094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x480098: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x480098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48009c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x48009cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4800a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4800a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4800a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4800a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4800a8: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x4800a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4800ac: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4800acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4800b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4800B0u;
    {
        const bool branch_taken_0x4800b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4800b0) {
            ctx->pc = 0x4800E4u;
            goto label_4800e4;
        }
    }
    ctx->pc = 0x4800B8u;
label_4800b8:
    // 0x4800b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4800b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4800bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4800bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4800c0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4800C0u;
    SET_GPR_U32(ctx, 31, 0x4800C8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4800C0u, 0x4800C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4800C8u;
label_4800c8:
    // 0x4800c8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x4800c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x4800cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4800CCu;
    {
        const bool branch_taken_0x4800cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4800cc) {
            ctx->pc = 0x4800DCu;
            goto label_4800dc;
        }
    }
    ctx->pc = 0x4800D4u;
    // 0x4800d4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x4800d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x4800d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4800d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4800dc:
    // 0x4800dc: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x4800dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x4800e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4800e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4800e4:
    // 0x4800e4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x4800E4u;
    {
        const bool branch_taken_0x4800e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x4800e4) {
            ctx->pc = 0x4800B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4800b8;
        }
    }
    ctx->pc = 0x4800ECu;
    // 0x4800ec: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4800ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4800f0:
    // 0x4800f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4800f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4800f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4800f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4800f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4800f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4800fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4800fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x480100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x480100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48010c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x48010cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x480110: 0x3e00008  jr          $ra
    ctx->pc = 0x480110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480118u;
    // 0x480118: 0x0  nop
    ctx->pc = 0x480118u;
    // NOP
    // 0x48011c: 0x0  nop
    ctx->pc = 0x48011cu;
    // NOP
    ctx->pc = 0x480120u;
}
