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

// Function: sub_0024FC20
// Address: 0x24fc20 - 0x24fe30
void sub_0024FC20_0x24fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC20_0x24fc20");
#endif

    switch (ctx->pc) {
        case 0x24fc90u: goto label_24fc90;
        case 0x24fca0u: goto label_24fca0;
        case 0x24fcb8u: goto label_24fcb8;
        case 0x24fcd0u: goto label_24fcd0;
        case 0x24fce0u: goto label_24fce0;
        case 0x24fd00u: goto label_24fd00;
        case 0x24fd10u: goto label_24fd10;
        case 0x24fd28u: goto label_24fd28;
        case 0x24fd40u: goto label_24fd40;
        case 0x24fd5cu: goto label_24fd5c;
        case 0x24fd6cu: goto label_24fd6c;
        case 0x24fd7cu: goto label_24fd7c;
        case 0x24fd94u: goto label_24fd94;
        case 0x24fda4u: goto label_24fda4;
        case 0x24fdb4u: goto label_24fdb4;
        case 0x24fdc4u: goto label_24fdc4;
        case 0x24fde0u: goto label_24fde0;
        case 0x24fe00u: goto label_24fe00;
        default: break;
    }

    ctx->pc = 0x24fc20u;

    // 0x24fc20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x24fc24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24fc28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24fc2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24fc30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24fc34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24fc38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24fc3c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x24fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x24fc40: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x24fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x24fc44: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x24fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x24fc48: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x24fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x24fc4c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x24fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x24fc50: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x24fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x24fc54: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x24fc54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fc58: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x24fc58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24fc5c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x24fc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24fc60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fc64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fc68: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24FC68u;
    {
        const bool branch_taken_0x24fc68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fc68) {
            ctx->pc = 0x24FCC0u;
            goto label_24fcc0;
        }
    }
    ctx->pc = 0x24FC70u;
    // 0x24fc70: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x24FC70u;
    {
        const bool branch_taken_0x24fc70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fc70) {
            ctx->pc = 0x24FD4Cu;
            goto label_24fd4c;
        }
    }
    ctx->pc = 0x24FC78u;
    // 0x24fc78: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x24FC78u;
    {
        const bool branch_taken_0x24fc78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fc78) {
            ctx->pc = 0x24FCC0u;
            goto label_24fcc0;
        }
    }
    ctx->pc = 0x24FC80u;
    // 0x24fc80: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x24fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x24fc84: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x24fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24fc88: 0xc093e08  jal         func_24F820
    ctx->pc = 0x24FC88u;
    SET_GPR_U32(ctx, 31, 0x24FC90u);
    ctx->pc = 0x24F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F820u, 0x24FC88u, 0x24FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC90u;
label_24fc90:
    // 0x24fc90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24fc90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc98: 0xc093df8  jal         func_24F7E0
    ctx->pc = 0x24FC98u;
    SET_GPR_U32(ctx, 31, 0x24FCA0u);
    ctx->pc = 0x24F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F7E0u, 0x24FC98u, 0x24FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCA0u;
label_24fca0:
    // 0x24fca0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x24fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fca4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x24fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x24fca8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24fca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24fcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcb0: 0xc093dd4  jal         func_24F750
    ctx->pc = 0x24FCB0u;
    SET_GPR_U32(ctx, 31, 0x24FCB8u);
    ctx->pc = 0x24F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F750u, 0x24FCB0u, 0x24FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCB8u;
label_24fcb8:
    // 0x24fcb8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24FCB8u;
    {
        const bool branch_taken_0x24fcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fcb8) {
            ctx->pc = 0x24FD4Cu;
            goto label_24fd4c;
        }
    }
    ctx->pc = 0x24FCC0u;
label_24fcc0:
    // 0x24fcc0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fcc4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24fcc8: 0xc093f94  jal         func_24FE50
    ctx->pc = 0x24FCC8u;
    SET_GPR_U32(ctx, 31, 0x24FCD0u);
    ctx->pc = 0x24FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE50u, 0x24FCC8u, 0x24FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCD0u;
label_24fcd0:
    // 0x24fcd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fcd8: 0xc093dcc  jal         func_24F730
    ctx->pc = 0x24FCD8u;
    SET_GPR_U32(ctx, 31, 0x24FCE0u);
    ctx->pc = 0x24F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F730u, 0x24FCD8u, 0x24FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FCE0u;
label_24fce0:
    // 0x24fce0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fce4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fcec: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24FCECu;
    {
        const bool branch_taken_0x24fcec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fcec) {
            ctx->pc = 0x24FD1Cu;
            goto label_24fd1c;
        }
    }
    ctx->pc = 0x24FCF4u;
    // 0x24fcf4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fcf8: 0xc091e50  jal         func_247940
    ctx->pc = 0x24FCF8u;
    SET_GPR_U32(ctx, 31, 0x24FD00u);
    ctx->pc = 0x247940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247940u, 0x24FCF8u, 0x24FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD00u;
label_24fd00:
    // 0x24fd00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fd04: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fd08: 0xc091e48  jal         func_247920
    ctx->pc = 0x24FD08u;
    SET_GPR_U32(ctx, 31, 0x24FD10u);
    ctx->pc = 0x247920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247920u, 0x24FD08u, 0x24FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD10u;
label_24fd10:
    // 0x24fd10: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fd14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24FD14u;
    {
        const bool branch_taken_0x24fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fd14) {
            ctx->pc = 0x24FD98u;
            goto label_24fd98;
        }
    }
    ctx->pc = 0x24FD1Cu;
label_24fd1c:
    // 0x24fd1c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fd20: 0xc064198  jal         func_190660
    ctx->pc = 0x24FD20u;
    SET_GPR_U32(ctx, 31, 0x24FD28u);
    ctx->pc = 0x190660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190660u, 0x24FD20u, 0x24FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD28u;
label_24fd28:
    // 0x24fd28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fd2c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24FD2Cu;
    {
        const bool branch_taken_0x24fd2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fd2c) {
            ctx->pc = 0x24FD98u;
            goto label_24fd98;
        }
    }
    ctx->pc = 0x24FD34u;
    // 0x24fd34: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fd38: 0xc064198  jal         func_190660
    ctx->pc = 0x24FD38u;
    SET_GPR_U32(ctx, 31, 0x24FD40u);
    ctx->pc = 0x190660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190660u, 0x24FD38u, 0x24FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD40u;
label_24fd40:
    // 0x24fd40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fd44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24FD44u;
    {
        const bool branch_taken_0x24fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fd44) {
            ctx->pc = 0x24FD98u;
            goto label_24fd98;
        }
    }
    ctx->pc = 0x24FD4Cu;
label_24fd4c:
    // 0x24fd4c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fd50: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x24fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24fd54: 0xc093f94  jal         func_24FE50
    ctx->pc = 0x24FD54u;
    SET_GPR_U32(ctx, 31, 0x24FD5Cu);
    ctx->pc = 0x24FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE50u, 0x24FD54u, 0x24FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD5Cu;
label_24fd5c:
    // 0x24fd5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd64: 0xc093dc4  jal         func_24F710
    ctx->pc = 0x24FD64u;
    SET_GPR_U32(ctx, 31, 0x24FD6Cu);
    ctx->pc = 0x24F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F710u, 0x24FD64u, 0x24FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD6Cu;
label_24fd6c:
    // 0x24fd6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x24fd70: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fd74: 0xc091e48  jal         func_247920
    ctx->pc = 0x24FD74u;
    SET_GPR_U32(ctx, 31, 0x24FD7Cu);
    ctx->pc = 0x247920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247920u, 0x24FD74u, 0x24FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD7Cu;
label_24fd7c:
    // 0x24fd7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fd80: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FD80u;
    {
        const bool branch_taken_0x24fd80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24fd80) {
            ctx->pc = 0x24FD98u;
            goto label_24fd98;
        }
    }
    ctx->pc = 0x24FD88u;
    // 0x24fd88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fd8c: 0xc091e48  jal         func_247920
    ctx->pc = 0x24FD8Cu;
    SET_GPR_U32(ctx, 31, 0x24FD94u);
    ctx->pc = 0x247920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247920u, 0x24FD8Cu, 0x24FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD94u;
label_24fd94:
    // 0x24fd94: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_24fd98:
    // 0x24fd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd9c: 0xc093f8c  jal         func_24FE30
    ctx->pc = 0x24FD9Cu;
    SET_GPR_U32(ctx, 31, 0x24FDA4u);
    ctx->pc = 0x24FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE30u, 0x24FD9Cu, 0x24FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDA4u;
label_24fda4:
    // 0x24fda4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x24fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x24fda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdac: 0xc093dcc  jal         func_24F730
    ctx->pc = 0x24FDACu;
    SET_GPR_U32(ctx, 31, 0x24FDB4u);
    ctx->pc = 0x24F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F730u, 0x24FDACu, 0x24FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDB4u;
label_24fdb4:
    // 0x24fdb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdbc: 0xc093dc4  jal         func_24F710
    ctx->pc = 0x24FDBCu;
    SET_GPR_U32(ctx, 31, 0x24FDC4u);
    ctx->pc = 0x24F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F710u, 0x24FDBCu, 0x24FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDC4u;
label_24fdc4:
    // 0x24fdc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24fdc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x24fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fdcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdd4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x24fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fdd8: 0xc042858  jal         func_10A160
    ctx->pc = 0x24FDD8u;
    SET_GPR_U32(ctx, 31, 0x24FDE0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x24FDD8u, 0x24FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDE0u;
label_24fde0:
    // 0x24fde0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x24fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fde4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24fde8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24fdec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24fdf0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x24fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fdf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdf8: 0xc093db8  jal         func_24F6E0
    ctx->pc = 0x24FDF8u;
    SET_GPR_U32(ctx, 31, 0x24FE00u);
    ctx->pc = 0x24F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F6E0u, 0x24FDF8u, 0x24FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE00u;
label_24fe00:
    // 0x24fe00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24fe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fe04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24fe04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fe08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24fe08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fe0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24fe0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fe10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24fe10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fe14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fe14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe18: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24fe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FE24u;
    // 0x24fe24: 0x0  nop
    ctx->pc = 0x24fe24u;
    // NOP
    // 0x24fe28: 0x0  nop
    ctx->pc = 0x24fe28u;
    // NOP
    // 0x24fe2c: 0x0  nop
    ctx->pc = 0x24fe2cu;
    // NOP
    ctx->pc = 0x24fe30u;
}
