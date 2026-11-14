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

// Function: sub_001FBCD0
// Address: 0x1fbcd0 - 0x1fbe20
void sub_001FBCD0_0x1fbcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBCD0_0x1fbcd0");
#endif

    switch (ctx->pc) {
        case 0x1fbd0cu: goto label_1fbd0c;
        case 0x1fbd14u: goto label_1fbd14;
        case 0x1fbd24u: goto label_1fbd24;
        case 0x1fbd34u: goto label_1fbd34;
        case 0x1fbd40u: goto label_1fbd40;
        case 0x1fbd58u: goto label_1fbd58;
        case 0x1fbd68u: goto label_1fbd68;
        case 0x1fbd78u: goto label_1fbd78;
        case 0x1fbd84u: goto label_1fbd84;
        case 0x1fbd94u: goto label_1fbd94;
        case 0x1fbddcu: goto label_1fbddc;
        case 0x1fbdf0u: goto label_1fbdf0;
        default: break;
    }

    ctx->pc = 0x1fbcd0u;

    // 0x1fbcd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fbcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fbcd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fbcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fbcd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fbcdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fbcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fbce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fbce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fbce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbce8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1fbce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1fbcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbcf0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1fbcf0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbcf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fbcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fbcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcfc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fbcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fbd00: 0x27859994  addiu       $a1, $gp, -0x666C
    ctx->pc = 0x1fbd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941076));
    // 0x1fbd04: 0xc040304  jal         func_100C10
    ctx->pc = 0x1FBD04u;
    SET_GPR_U32(ctx, 31, 0x1FBD0Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1FBD04u, 0x1FBD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD0Cu;
label_1fbd0c:
    // 0x1fbd0c: 0xc107150  jal         func_41C540
    ctx->pc = 0x1FBD0Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD14u);
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x1FBD0Cu, 0x1FBD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD14u;
label_1fbd14:
    // 0x1fbd14: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbd18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fbd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd1c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1FBD1Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD24u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1FBD1Cu, 0x1FBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD24u;
label_1fbd24:
    // 0x1fbd24: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1fbd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1fbd28: 0x24848cd0  addiu       $a0, $a0, -0x7330
    ctx->pc = 0x1fbd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937808));
    // 0x1fbd2c: 0xc107156  jal         func_41C558
    ctx->pc = 0x1FBD2Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD34u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x1FBD2Cu, 0x1FBD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD34u;
label_1fbd34:
    // 0x1fbd34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fbd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd38: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FBD38u;
    {
        const bool branch_taken_0x1fbd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd38) {
            ctx->pc = 0x1FBDBCu;
            goto label_1fbdbc;
        }
    }
    ctx->pc = 0x1FBD40u;
label_1fbd40:
    // 0x1fbd40: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fbd44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fbd48: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1fbd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fbd4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fbd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd50: 0xc07ef00  jal         func_1FBC00
    ctx->pc = 0x1FBD50u;
    SET_GPR_U32(ctx, 31, 0x1FBD58u);
    ctx->pc = 0x1FBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC00u, 0x1FBD50u, 0x1FBD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD58u;
label_1fbd58:
    // 0x1fbd58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fbd5c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fbd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fbd60: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x1FBD60u;
    SET_GPR_U32(ctx, 31, 0x1FBD68u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x1FBD60u, 0x1FBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD68u;
label_1fbd68:
    // 0x1fbd68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fbd6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fbd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbd70: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FBD70u;
    SET_GPR_U32(ctx, 31, 0x1FBD78u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FBD70u, 0x1FBD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD78u;
label_1fbd78:
    // 0x1fbd78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fbd7c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FBD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD84u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FBD7Cu, 0x1FBD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD84u;
label_1fbd84:
    // 0x1fbd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fbd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd8c: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x1FBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD94u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x1FBD8Cu, 0x1FBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD94u;
label_1fbd94:
    // 0x1fbd94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fbd94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd98: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1fbd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1fbd9c: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1fbd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fbda0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fbda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbda4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fbda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fbda8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fbda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fbdac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fbdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fbdb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fbdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fbdb4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1fbdb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fbdb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fbdbc:
    // 0x1fbdbc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fbdc0: 0x8c42bf5c  lw          $v0, -0x40A4($v0)
    ctx->pc = 0x1fbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BF5Cu));
    // 0x1fbdc4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fbdc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fbdc8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1FBDC8u;
    {
        const bool branch_taken_0x1fbdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbdc8) {
            ctx->pc = 0x1FBD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbd40;
        }
    }
    ctx->pc = 0x1FBDD0u;
    // 0x1fbdd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbdd4: 0xc107156  jal         func_41C558
    ctx->pc = 0x1FBDD4u;
    SET_GPR_U32(ctx, 31, 0x1FBDDCu);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x1FBDD4u, 0x1FBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDDCu;
label_1fbddc:
    // 0x1fbddc: 0x323300ff  andi        $s3, $s1, 0xFF
    ctx->pc = 0x1fbddcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1fbde0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fbde4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fbde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbde8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FBDE8u;
    SET_GPR_U32(ctx, 31, 0x1FBDF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FBDE8u, 0x1FBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDF0u;
label_1fbdf0:
    // 0x1fbdf0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fbdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fbdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbdf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fbdf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbdfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbe00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fbe00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbe04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbe04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe08: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1fbe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fbe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE14u;
    // 0x1fbe14: 0x0  nop
    ctx->pc = 0x1fbe14u;
    // NOP
    // 0x1fbe18: 0x0  nop
    ctx->pc = 0x1fbe18u;
    // NOP
    // 0x1fbe1c: 0x0  nop
    ctx->pc = 0x1fbe1cu;
    // NOP
    ctx->pc = 0x1fbe20u;
}
