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

// Function: sub_00299950
// Address: 0x299950 - 0x299af0
void sub_00299950_0x299950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299950_0x299950");
#endif

    switch (ctx->pc) {
        case 0x299974u: goto label_299974;
        case 0x2999e0u: goto label_2999e0;
        case 0x299a14u: goto label_299a14;
        case 0x299a48u: goto label_299a48;
        case 0x299a7cu: goto label_299a7c;
        case 0x299a90u: goto label_299a90;
        case 0x299ac8u: goto label_299ac8;
        default: break;
    }

    ctx->pc = 0x299950u;

    // 0x299950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29995c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x299960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299964: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x299964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x299968: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29996c: 0xc052608  jal         func_149820
    ctx->pc = 0x29996Cu;
    SET_GPR_U32(ctx, 31, 0x299974u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x29996Cu, 0x299974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299974u;
label_299974:
    // 0x299974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299978: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29997c: 0x3e00008  jr          $ra
    ctx->pc = 0x29997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299984u;
    // 0x299984: 0x0  nop
    ctx->pc = 0x299984u;
    // NOP
    // 0x299988: 0x0  nop
    ctx->pc = 0x299988u;
    // NOP
    // 0x29998c: 0x0  nop
    ctx->pc = 0x29998cu;
    // NOP
    // 0x299990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x299990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x299994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29999c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2999a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2999a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2999a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2999a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2999a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2999ac: 0x14020046  bne         $zero, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2999ACu;
    {
        const bool branch_taken_0x2999ac = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2999ac) {
            ctx->pc = 0x299AC8u;
            goto label_299ac8;
        }
    }
    ctx->pc = 0x2999B4u;
    // 0x2999b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2999b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2999b8: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x2999b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2999bc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2999bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2999c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2999c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2999c4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2999c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2999c8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2999C8u;
    {
        const bool branch_taken_0x2999c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2999c8) {
            ctx->pc = 0x2999E8u;
            goto label_2999e8;
        }
    }
    ctx->pc = 0x2999D0u;
    // 0x2999d0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2999d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2999d4: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x2999d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x2999d8: 0xc107156  jal         func_41C558
    ctx->pc = 0x2999D8u;
    SET_GPR_U32(ctx, 31, 0x2999E0u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x2999D8u, 0x2999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999E0u;
label_2999e0:
    // 0x2999e0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2999E0u;
    {
        const bool branch_taken_0x2999e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2999e0) {
            ctx->pc = 0x299A7Cu;
            goto label_299a7c;
        }
    }
    ctx->pc = 0x2999E8u;
label_2999e8:
    // 0x2999e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2999e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2999ec: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x2999ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2999f0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2999f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2999f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2999f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2999f8: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x2999f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2999fc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2999FCu;
    {
        const bool branch_taken_0x2999fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2999fc) {
            ctx->pc = 0x299A1Cu;
            goto label_299a1c;
        }
    }
    ctx->pc = 0x299A04u;
    // 0x299a04: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x299a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x299a08: 0x2484d6b0  addiu       $a0, $a0, -0x2950
    ctx->pc = 0x299a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956720));
    // 0x299a0c: 0xc107156  jal         func_41C558
    ctx->pc = 0x299A0Cu;
    SET_GPR_U32(ctx, 31, 0x299A14u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x299A0Cu, 0x299A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A14u;
label_299a14:
    // 0x299a14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x299A14u;
    {
        const bool branch_taken_0x299a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299a14) {
            ctx->pc = 0x299A7Cu;
            goto label_299a7c;
        }
    }
    ctx->pc = 0x299A1Cu;
label_299a1c:
    // 0x299a1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x299a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299a20: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x299a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299a24: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x299a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x299a28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x299a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x299a2c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x299a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299a30: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299A30u;
    {
        const bool branch_taken_0x299a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x299a30) {
            ctx->pc = 0x299A50u;
            goto label_299a50;
        }
    }
    ctx->pc = 0x299A38u;
    // 0x299a38: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x299a3c: 0x2484d6e0  addiu       $a0, $a0, -0x2920
    ctx->pc = 0x299a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956768));
    // 0x299a40: 0xc107156  jal         func_41C558
    ctx->pc = 0x299A40u;
    SET_GPR_U32(ctx, 31, 0x299A48u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x299A40u, 0x299A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A48u;
label_299a48:
    // 0x299a48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x299A48u;
    {
        const bool branch_taken_0x299a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299a48) {
            ctx->pc = 0x299A7Cu;
            goto label_299a7c;
        }
    }
    ctx->pc = 0x299A50u;
label_299a50:
    // 0x299a50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x299a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299a54: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x299a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299a58: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x299a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x299a5c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x299a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x299a60: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x299a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x299a64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299A64u;
    {
        const bool branch_taken_0x299a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x299a64) {
            ctx->pc = 0x299A7Cu;
            goto label_299a7c;
        }
    }
    ctx->pc = 0x299A6Cu;
    // 0x299a6c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x299a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x299a70: 0x2484d710  addiu       $a0, $a0, -0x28F0
    ctx->pc = 0x299a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956816));
    // 0x299a74: 0xc107156  jal         func_41C558
    ctx->pc = 0x299A74u;
    SET_GPR_U32(ctx, 31, 0x299A7Cu);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x299A74u, 0x299A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A7Cu;
label_299a7c:
    // 0x299a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x299a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299a80: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x299a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a88: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x299A88u;
    SET_GPR_U32(ctx, 31, 0x299A90u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x299A88u, 0x299A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A90u;
label_299a90:
    // 0x299a90: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x299a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x299a94: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x299a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x299a98: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x299a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x299a9c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x299a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x299aa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x299aa4: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x299aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x299aa8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x299aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x299aac: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x299aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x299ab0: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x299ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x299ab4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x299ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299ab8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299abc: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x299abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x299ac0: 0xc0e39e0  jal         func_38E780
    ctx->pc = 0x299AC0u;
    SET_GPR_U32(ctx, 31, 0x299AC8u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x299AC0u, 0x299AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299AC8u;
label_299ac8:
    // 0x299ac8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x299ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299acc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x299accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x299ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x299adc: 0x3e00008  jr          $ra
    ctx->pc = 0x299ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299AE4u;
    // 0x299ae4: 0x0  nop
    ctx->pc = 0x299ae4u;
    // NOP
    // 0x299ae8: 0x0  nop
    ctx->pc = 0x299ae8u;
    // NOP
    // 0x299aec: 0x0  nop
    ctx->pc = 0x299aecu;
    // NOP
    ctx->pc = 0x299af0u;
}
