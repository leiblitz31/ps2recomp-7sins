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

// Function: sub_00480220
// Address: 0x480220 - 0x4802f0
void sub_00480220_0x480220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480220_0x480220");
#endif

    switch (ctx->pc) {
        case 0x480254u: goto label_480254;
        case 0x480288u: goto label_480288;
        case 0x480298u: goto label_480298;
        default: break;
    }

    ctx->pc = 0x480220u;

    // 0x480220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x480220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x480224: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x480224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x480228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x480228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48022c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x480230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x480234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x480238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48023c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x48023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x480240: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x480240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x480244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x480244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x480248: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x480248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48024c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x48024Cu;
    SET_GPR_U32(ctx, 31, 0x480254u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48024Cu, 0x480254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480254u;
label_480254:
    // 0x480254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480258: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x480258u;
    {
        const bool branch_taken_0x480258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x480258) {
            ctx->pc = 0x4802C0u;
            goto label_4802c0;
        }
    }
    ctx->pc = 0x480260u;
    // 0x480260: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x480260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x480264: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x480264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x480268: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x480268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48026c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x48026cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x480270: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x480270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x480274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x480274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x480278: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x480278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x48027c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x48027cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480280: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x480280u;
    {
        const bool branch_taken_0x480280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x480280) {
            ctx->pc = 0x4802B4u;
            goto label_4802b4;
        }
    }
    ctx->pc = 0x480288u;
label_480288:
    // 0x480288: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x480288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48028c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480290: 0xc0400e0  jal         func_100380
    ctx->pc = 0x480290u;
    SET_GPR_U32(ctx, 31, 0x480298u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x480290u, 0x480298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480298u;
label_480298:
    // 0x480298: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x480298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x48029c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48029Cu;
    {
        const bool branch_taken_0x48029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48029c) {
            ctx->pc = 0x4802ACu;
            goto label_4802ac;
        }
    }
    ctx->pc = 0x4802A4u;
    // 0x4802a4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x4802a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x4802a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4802a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4802ac:
    // 0x4802ac: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x4802acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x4802b0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4802b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4802b4:
    // 0x4802b4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x4802B4u;
    {
        const bool branch_taken_0x4802b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x4802b4) {
            ctx->pc = 0x480288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_480288;
        }
    }
    ctx->pc = 0x4802BCu;
    // 0x4802bc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4802bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4802c0:
    // 0x4802c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4802c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4802c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4802c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4802c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4802c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4802cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4802ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4802d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4802d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4802d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4802d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4802d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4802d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4802dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x4802dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4802e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4802E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4802E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4802E8u;
    // 0x4802e8: 0x0  nop
    ctx->pc = 0x4802e8u;
    // NOP
    // 0x4802ec: 0x0  nop
    ctx->pc = 0x4802ecu;
    // NOP
    ctx->pc = 0x4802f0u;
}
