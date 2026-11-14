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

// Function: sub_00302350
// Address: 0x302350 - 0x302440
void sub_00302350_0x302350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302350_0x302350");
#endif

    switch (ctx->pc) {
        case 0x3023a8u: goto label_3023a8;
        case 0x3023d0u: goto label_3023d0;
        case 0x3023ecu: goto label_3023ec;
        default: break;
    }

    ctx->pc = 0x302350u;

    // 0x302350: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x302350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x302354: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x302354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x302358: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x302358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x30235c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x30235cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302360: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x302360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x302364: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x302364u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302368: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x302368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x30236c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x30236cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302370: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x302370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x302374: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x302374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302378: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x302378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x30237c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x30237cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302380: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x302380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x302384: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x302384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302388: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x302388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x30238c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30238cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302390: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x302390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x302394: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x302394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302398: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x302398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30239c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x30239cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x3023a0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3023a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3023a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3023a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3023a8:
    // 0x3023a8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3023a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3023acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3023b0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3023b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023b4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3023b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3023b8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3023b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3023bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3023c0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x3023c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023c4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023c8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3023C8u;
    SET_GPR_U32(ctx, 31, 0x3023D0u);
    ctx->pc = 0x3023CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023C8u;
    // 0x3023cc: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3023C8u, 0x3023D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023D0u;
label_3023d0:
    // 0x3023d0: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x3023d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3023d4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3023D4u;
    {
        const bool branch_taken_0x3023d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023D4u;
        // 0x3023d8: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023d4) {
            ctx->pc = 0x302408u;
            goto label_302408;
        }
    }
    ctx->pc = 0x3023DCu;
    // 0x3023dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3023DCu;
    {
        const bool branch_taken_0x3023dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3023E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023DCu;
        // 0x3023e0: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023dc) {
            ctx->pc = 0x302408u;
            goto label_302408;
        }
    }
    ctx->pc = 0x3023E4u;
    // 0x3023e4: 0xc0bfaf6  jal         func_2FEBD8
    ctx->pc = 0x3023E4u;
    SET_GPR_U32(ctx, 31, 0x3023ECu);
    ctx->pc = 0x3023E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023E4u;
    // 0x3023e8: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEBD8u, 0x3023E4u, 0x3023ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023ECu;
label_3023ec:
    // 0x3023ec: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x3023ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x3023f0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3023F0u;
    {
        const bool branch_taken_0x3023f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3023f0) {
            ctx->pc = 0x3023F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3023F0u;
            // 0x3023f4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3023F8u;
            goto label_3023f8;
        }
    }
    ctx->pc = 0x3023F8u;
label_3023f8:
    // 0x3023f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3023f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3023fc: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x3023fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x302400: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x302400u;
    {
        const bool branch_taken_0x302400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302400u;
        // 0x302404: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302400) {
            ctx->pc = 0x3023A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3023a8;
        }
    }
    ctx->pc = 0x302408u;
label_302408:
    // 0x302408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x302408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30240c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x30240cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x302410: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x302410u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x302414: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x302414u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x302418: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x302418u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30241c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x30241cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x302420: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x302420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302424: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x302424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302428: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x302428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30242c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x30242cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302430: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x302430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302434: 0x3e00008  jr          $ra
    ctx->pc = 0x302434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302434u;
        // 0x302438: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30243Cu;
    // 0x30243c: 0x0  nop
    ctx->pc = 0x30243cu;
    // NOP
    ctx->pc = 0x302440u;
}
