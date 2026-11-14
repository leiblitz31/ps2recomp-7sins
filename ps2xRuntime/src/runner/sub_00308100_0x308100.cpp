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

// Function: sub_00308100
// Address: 0x308100 - 0x308218
void sub_00308100_0x308100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308100_0x308100");
#endif

    switch (ctx->pc) {
        case 0x308154u: goto label_308154;
        case 0x308170u: goto label_308170;
        case 0x30817cu: goto label_30817c;
        case 0x308190u: goto label_308190;
        case 0x3081a8u: goto label_3081a8;
        case 0x3081bcu: goto label_3081bc;
        case 0x3081c8u: goto label_3081c8;
        case 0x3081e0u: goto label_3081e0;
        default: break;
    }

    ctx->pc = 0x308100u;

    // 0x308100: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x308100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x308104: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x308104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308108: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x308108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x30810c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x30810cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x308110: 0x8c530fc0  lw          $s3, 0xFC0($v0)
    ctx->pc = 0x308110u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x4F0FC0u));
    // 0x308114: 0x24671a78  addiu       $a3, $v1, 0x1A78
    ctx->pc = 0x308114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6776));
    // 0x308118: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x308118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x30811c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x30811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x308120: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x308124: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x308124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x308128: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x308128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30812c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x30812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x308130: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x308130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308134: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x308134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x308138: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x308138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30813c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x30813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x308140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308144: 0x8c641a78  lw          $a0, 0x1A78($v1)
    ctx->pc = 0x308144u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4F1A78u));
    // 0x308148: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x308148u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F1A7Cu));
    // 0x30814c: 0xc0c203c  jal         func_3080F0
    ctx->pc = 0x30814Cu;
    SET_GPR_U32(ctx, 31, 0x308154u);
    ctx->pc = 0x308150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30814Cu;
    // 0x308150: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3080F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080F0u, 0x30814Cu, 0x308154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308154u;
label_308154:
    // 0x308154: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x308154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x308158: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x308158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30815c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308160: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x308160u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x308164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x308164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308168: 0xc0c202c  jal         func_3080B0
    ctx->pc = 0x308168u;
    SET_GPR_U32(ctx, 31, 0x308170u);
    ctx->pc = 0x30816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308168u;
    // 0x30816c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3080B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080B0u, 0x308168u, 0x308170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308170u;
label_308170:
    // 0x308170: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x308170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x308174: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x308174u;
    SET_GPR_U32(ctx, 31, 0x30817Cu);
    ctx->pc = 0x308178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308174u;
    // 0x308178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x308174u, 0x30817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30817Cu;
label_30817c:
    // 0x30817c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x30817cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308180: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x308184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308188: 0xc0c202c  jal         func_3080B0
    ctx->pc = 0x308188u;
    SET_GPR_U32(ctx, 31, 0x308190u);
    ctx->pc = 0x30818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308188u;
    // 0x30818c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3080B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080B0u, 0x308188u, 0x308190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308190u;
label_308190:
    // 0x308190: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x308190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308194: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x308194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x308198: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x308198u;
    {
        const bool branch_taken_0x308198 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x30819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308198u;
        // 0x30819c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308198) {
            ctx->pc = 0x3081F0u;
            goto label_3081f0;
        }
    }
    ctx->pc = 0x3081A0u;
    // 0x3081a0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3081a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081a4: 0x0  nop
    ctx->pc = 0x3081a4u;
    // NOP
label_3081a8:
    // 0x3081a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3081a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3081acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3081b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3081b4: 0xc0c202c  jal         func_3080B0
    ctx->pc = 0x3081B4u;
    SET_GPR_U32(ctx, 31, 0x3081BCu);
    ctx->pc = 0x3081B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081B4u;
    // 0x3081b8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3080B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080B0u, 0x3081B4u, 0x3081BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081BCu;
label_3081bc:
    // 0x3081bc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3081bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3081c0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3081C0u;
    SET_GPR_U32(ctx, 31, 0x3081C8u);
    ctx->pc = 0x3081C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081C0u;
    // 0x3081c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3081C0u, 0x3081C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081C8u;
label_3081c8:
    // 0x3081c8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x3081c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3081cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3081d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3081d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3081d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3081d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081d8: 0xc0c202c  jal         func_3080B0
    ctx->pc = 0x3081D8u;
    SET_GPR_U32(ctx, 31, 0x3081E0u);
    ctx->pc = 0x3081DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081D8u;
    // 0x3081dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3080B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080B0u, 0x3081D8u, 0x3081E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081E0u;
label_3081e0:
    // 0x3081e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3081e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3081e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3081e8: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3081E8u;
    {
        const bool branch_taken_0x3081e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3081ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081E8u;
        // 0x3081ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081e8) {
            ctx->pc = 0x3081A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3081a8;
        }
    }
    ctx->pc = 0x3081F0u;
label_3081f0:
    // 0x3081f0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3081f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3081f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3081f8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3081f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3081fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3081fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308200: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x308200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308204: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x308204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308208: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x308208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30820c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30820cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308210: 0x3e00008  jr          $ra
    ctx->pc = 0x308210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308210u;
        // 0x308214: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308218u;
}
