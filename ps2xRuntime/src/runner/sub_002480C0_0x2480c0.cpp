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

// Function: sub_002480C0
// Address: 0x2480c0 - 0x248280
void sub_002480C0_0x2480c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002480C0_0x2480c0");
#endif

    switch (ctx->pc) {
        case 0x248120u: goto label_248120;
        case 0x248134u: goto label_248134;
        case 0x248144u: goto label_248144;
        case 0x248164u: goto label_248164;
        case 0x24819cu: goto label_24819c;
        case 0x2481dcu: goto label_2481dc;
        case 0x248200u: goto label_248200;
        case 0x248220u: goto label_248220;
        case 0x248230u: goto label_248230;
        case 0x248248u: goto label_248248;
        case 0x24825cu: goto label_24825c;
        default: break;
    }

    ctx->pc = 0x2480c0u;

    // 0x2480c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2480c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2480c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2480c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2480c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2480cc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2480ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2480d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2480D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2480D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2480D8u;
    // 0x2480d8: 0x0  nop
    ctx->pc = 0x2480d8u;
    // NOP
    // 0x2480dc: 0x0  nop
    ctx->pc = 0x2480dcu;
    // NOP
    // 0x2480e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2480e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2480e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2480e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2480e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2480ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2480ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2480f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2480f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2480f4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2480F4u;
    {
        const bool branch_taken_0x2480f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2480f4) {
            ctx->pc = 0x248164u;
            goto label_248164;
        }
    }
    ctx->pc = 0x2480FCu;
    // 0x2480fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2480fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x248100: 0x24635820  addiu       $v1, $v1, 0x5820
    ctx->pc = 0x248100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22560));
    // 0x248104: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248108: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x248108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24810c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248110: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x248110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x248114: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x248114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x248118: 0xc091db8  jal         func_2476E0
    ctx->pc = 0x248118u;
    SET_GPR_U32(ctx, 31, 0x248120u);
    ctx->pc = 0x2476E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2476E0u, 0x248118u, 0x248120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248120u;
label_248120:
    // 0x248120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248124: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x248124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x248128: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24812c: 0xc091e58  jal         func_247960
    ctx->pc = 0x24812Cu;
    SET_GPR_U32(ctx, 31, 0x248134u);
    ctx->pc = 0x247960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247960u, 0x24812Cu, 0x248134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248134u;
label_248134:
    // 0x248134: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24813c: 0xc091188  jal         func_244620
    ctx->pc = 0x24813Cu;
    SET_GPR_U32(ctx, 31, 0x248144u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x24813Cu, 0x248144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248144u;
label_248144:
    // 0x248144: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x248144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248148: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x248148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24814c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24814cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x248150: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248150u;
    {
        const bool branch_taken_0x248150 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x248150) {
            ctx->pc = 0x248164u;
            goto label_248164;
        }
    }
    ctx->pc = 0x248158u;
    // 0x248158: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24815c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x24815Cu;
    SET_GPR_U32(ctx, 31, 0x248164u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x24815Cu, 0x248164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248164u;
label_248164:
    // 0x248164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x248164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24816c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24816cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248170: 0x3e00008  jr          $ra
    ctx->pc = 0x248170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248178u;
    // 0x248178: 0x0  nop
    ctx->pc = 0x248178u;
    // NOP
    // 0x24817c: 0x0  nop
    ctx->pc = 0x24817cu;
    // NOP
    // 0x248180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24818c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x248190: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x248190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248194: 0xc0911a4  jal         func_244690
    ctx->pc = 0x248194u;
    SET_GPR_U32(ctx, 31, 0x24819Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x248194u, 0x24819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24819Cu;
label_24819c:
    // 0x24819c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24819cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2481a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2481a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2481a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2481a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2481a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2481ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2481acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2481b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2481B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2481B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2481B8u;
    // 0x2481b8: 0x0  nop
    ctx->pc = 0x2481b8u;
    // NOP
    // 0x2481bc: 0x0  nop
    ctx->pc = 0x2481bcu;
    // NOP
    // 0x2481c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2481c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2481c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2481c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2481c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2481c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2481cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2481ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2481d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2481d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2481d4: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2481D4u;
    SET_GPR_U32(ctx, 31, 0x2481DCu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2481D4u, 0x2481DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481DCu;
label_2481dc:
    // 0x2481dc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2481dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2481e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2481e4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2481e8: 0x10020013  beq         $zero, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2481E8u;
    {
        const bool branch_taken_0x2481e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2481e8) {
            ctx->pc = 0x248238u;
            goto label_248238;
        }
    }
    ctx->pc = 0x2481F0u;
    // 0x2481f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2481f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2481f4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2481f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2481f8: 0xc0948f4  jal         func_2523D0
    ctx->pc = 0x2481F8u;
    SET_GPR_U32(ctx, 31, 0x248200u);
    ctx->pc = 0x2523D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2523D0u, 0x2481F8u, 0x248200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248200u;
label_248200:
    // 0x248200: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248204: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x248204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x248208: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x248208u;
    {
        const bool branch_taken_0x248208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248208) {
            ctx->pc = 0x248238u;
            goto label_248238;
        }
    }
    ctx->pc = 0x248210u;
    // 0x248210: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248214: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x248218: 0xc0920ac  jal         func_2482B0
    ctx->pc = 0x248218u;
    SET_GPR_U32(ctx, 31, 0x248220u);
    ctx->pc = 0x2482B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2482B0u, 0x248218u, 0x248220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248220u;
label_248220:
    // 0x248220: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248224: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x248228: 0xc119c5c  jal         func_467170
    ctx->pc = 0x248228u;
    SET_GPR_U32(ctx, 31, 0x248230u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x248228u, 0x248230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248230u;
label_248230:
    // 0x248230: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248234: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x248234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_248238:
    // 0x248238: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24823c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x24823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x248240: 0xc0920a0  jal         func_248280
    ctx->pc = 0x248240u;
    SET_GPR_U32(ctx, 31, 0x248248u);
    ctx->pc = 0x248280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248280u, 0x248240u, 0x248248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248248u;
label_248248:
    // 0x248248: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24824c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24824cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248250: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x248250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x248254: 0xc093738  jal         func_24DCE0
    ctx->pc = 0x248254u;
    SET_GPR_U32(ctx, 31, 0x24825Cu);
    ctx->pc = 0x24DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DCE0u, 0x248254u, 0x24825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24825Cu;
label_24825c:
    // 0x24825c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24825cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x248268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24826c: 0x3e00008  jr          $ra
    ctx->pc = 0x24826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248274u;
    // 0x248274: 0x0  nop
    ctx->pc = 0x248274u;
    // NOP
    // 0x248278: 0x0  nop
    ctx->pc = 0x248278u;
    // NOP
    // 0x24827c: 0x0  nop
    ctx->pc = 0x24827cu;
    // NOP
    ctx->pc = 0x248280u;
}
