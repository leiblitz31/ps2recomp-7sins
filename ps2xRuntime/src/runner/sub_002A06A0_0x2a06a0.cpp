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

// Function: sub_002A06A0
// Address: 0x2a06a0 - 0x2a0870
void sub_002A06A0_0x2a06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A06A0_0x2a06a0");
#endif

    switch (ctx->pc) {
        case 0x2a06f0u: goto label_2a06f0;
        case 0x2a0734u: goto label_2a0734;
        case 0x2a0758u: goto label_2a0758;
        case 0x2a079cu: goto label_2a079c;
        case 0x2a07c0u: goto label_2a07c0;
        case 0x2a07e0u: goto label_2a07e0;
        case 0x2a07ecu: goto label_2a07ec;
        case 0x2a0818u: goto label_2a0818;
        case 0x2a0830u: goto label_2a0830;
        case 0x2a0840u: goto label_2a0840;
        default: break;
    }

    ctx->pc = 0x2a06a0u;

    // 0x2a06a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a06a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a06a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a06a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a06a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a06ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a06b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a06b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a06b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a06b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a06b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a06bc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2a06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2a06c0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2a06c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2a06c4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2a06c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2a06c8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2a06c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x2a06cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a06d0: 0x9042019c  lbu         $v0, 0x19C($v0)
    ctx->pc = 0x2a06d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x2a06d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a06d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a06d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A06D8u;
    {
        const bool branch_taken_0x2a06d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a06d8) {
            ctx->pc = 0x2A0748u;
            goto label_2a0748;
        }
    }
    ctx->pc = 0x2A06E0u;
    // 0x2a06e0: 0x8fb10080  lw          $s1, 0x80($sp)
    ctx->pc = 0x2a06e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a06e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a06e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06e8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A06E8u;
    SET_GPR_U32(ctx, 31, 0x2A06F0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A06E8u, 0x2A06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06F0u;
label_2a06f0:
    // 0x2a06f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a06f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a06f8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a06f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a06fc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a06fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a0700: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a0700u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a0704: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a0708: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A0708u;
    {
        const bool branch_taken_0x2a0708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0708) {
            ctx->pc = 0x2A07A8u;
            goto label_2a07a8;
        }
    }
    ctx->pc = 0x2A0710u;
    // 0x2a0710: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0714: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a0718: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a0718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a071c: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A071Cu;
    {
        const bool branch_taken_0x2a071c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a071c) {
            ctx->pc = 0x2A07A8u;
            goto label_2a07a8;
        }
    }
    ctx->pc = 0x2A0724u;
    // 0x2a0724: 0x24140032  addiu       $s4, $zero, 0x32
    ctx->pc = 0x2a0724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a0728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a072c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A072Cu;
    SET_GPR_U32(ctx, 31, 0x2A0734u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A072Cu, 0x2A0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0734u;
label_2a0734:
    // 0x2a0734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0738: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a073c: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x2a073cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x2a0740: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A0740u;
    {
        const bool branch_taken_0x2a0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0740) {
            ctx->pc = 0x2A07A8u;
            goto label_2a07a8;
        }
    }
    ctx->pc = 0x2A0748u;
label_2a0748:
    // 0x2a0748: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x2a0748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a074c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0750: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A0750u;
    SET_GPR_U32(ctx, 31, 0x2A0758u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A0750u, 0x2A0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0758u;
label_2a0758:
    // 0x2a0758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a075c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a0760: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a0760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0764: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a0764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a0768: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a0768u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a076c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a0770: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0770u;
    {
        const bool branch_taken_0x2a0770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a0770) {
            ctx->pc = 0x2A07A8u;
            goto label_2a07a8;
        }
    }
    ctx->pc = 0x2A0778u;
    // 0x2a0778: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a077c: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a0780: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a0780u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0784: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0784u;
    {
        const bool branch_taken_0x2a0784 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0784) {
            ctx->pc = 0x2A07A8u;
            goto label_2a07a8;
        }
    }
    ctx->pc = 0x2A078Cu;
    // 0x2a078c: 0x24140031  addiu       $s4, $zero, 0x31
    ctx->pc = 0x2a078cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a0790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0794: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A0794u;
    SET_GPR_U32(ctx, 31, 0x2A079Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A0794u, 0x2A079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A079Cu;
label_2a079c:
    // 0x2a079c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a07a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a07a4: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x2a07a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
label_2a07a8:
    // 0x2a07a8: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a07a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a07ac: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2a07acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a07b0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a07b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a07b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07b8: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A07B8u;
    SET_GPR_U32(ctx, 31, 0x2A07C0u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A07B8u, 0x2A07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07C0u;
label_2a07c0:
    // 0x2a07c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a07c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07c4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2a07c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2a07c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a07c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07cc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a07ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a07d0: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x2a07d4: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x2a07d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2a07d8: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2A07D8u;
    SET_GPR_U32(ctx, 31, 0x2A07E0u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2A07D8u, 0x2A07E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07E0u;
label_2a07e0:
    // 0x2a07e0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2a07e4: 0xc0e27da  jal         func_389F68
    ctx->pc = 0x2A07E4u;
    SET_GPR_U32(ctx, 31, 0x2A07ECu);
    ctx->pc = 0x389F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F68u, 0x2A07E4u, 0x2A07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07ECu;
label_2a07ec:
    // 0x2a07ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a07ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a07f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A07F4u;
    {
        const bool branch_taken_0x2a07f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a07f4) {
            ctx->pc = 0x2A0804u;
            goto label_2a0804;
        }
    }
    ctx->pc = 0x2A07FCu;
    // 0x2a07fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0800: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2a0800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
label_2a0804:
    // 0x2a0804: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a0808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a080c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a080cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0810: 0xc0e2700  jal         func_389C00
    ctx->pc = 0x2A0810u;
    SET_GPR_U32(ctx, 31, 0x2A0818u);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x2A0810u, 0x2A0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0818u;
label_2a0818:
    // 0x2a0818: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a081c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0824: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a0824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a0828: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x2A0828u;
    SET_GPR_U32(ctx, 31, 0x2A0830u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x2A0828u, 0x2A0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0830u;
label_2a0830:
    // 0x2a0830: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0834: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a0834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0838: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A0838u;
    SET_GPR_U32(ctx, 31, 0x2A0840u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A0838u, 0x2A0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0840u;
label_2a0840:
    // 0x2a0840: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a0840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0844: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0848: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a084c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a084cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0858: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a0858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a085c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A085Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0864u;
    // 0x2a0864: 0x0  nop
    ctx->pc = 0x2a0864u;
    // NOP
    // 0x2a0868: 0x0  nop
    ctx->pc = 0x2a0868u;
    // NOP
    // 0x2a086c: 0x0  nop
    ctx->pc = 0x2a086cu;
    // NOP
    ctx->pc = 0x2a0870u;
}
