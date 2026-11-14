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

// Function: sub_00194450
// Address: 0x194450 - 0x1945c0
void sub_00194450_0x194450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194450_0x194450");
#endif

    switch (ctx->pc) {
        case 0x194478u: goto label_194478;
        case 0x194494u: goto label_194494;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944f0u: goto label_1944f0;
        case 0x19452cu: goto label_19452c;
        case 0x194554u: goto label_194554;
        case 0x194560u: goto label_194560;
        case 0x194584u: goto label_194584;
        case 0x194594u: goto label_194594;
        default: break;
    }

    ctx->pc = 0x194450u;

    // 0x194450: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x194450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x194454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19445c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194464: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x194464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x194468: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x194468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x19446c: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x19446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x194470: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x194470u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x194474: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194478:
    // 0x194478: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x194478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19447c: 0x24f10001  addiu       $s1, $a3, 0x1
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x194480: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x194484: 0x27859270  addiu       $a1, $gp, -0x6D90
    ctx->pc = 0x194484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939248));
    // 0x194488: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19448c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x19448Cu;
    SET_GPR_U32(ctx, 31, 0x194494u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x19448Cu, 0x194494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194494u;
label_194494:
    // 0x194494: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x194494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194498: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19449c: 0xc05621c  jal         func_158870
    ctx->pc = 0x19449Cu;
    SET_GPR_U32(ctx, 31, 0x1944A4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x19449Cu, 0x1944A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944A4u;
label_1944a4:
    // 0x1944a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1944a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944a8: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1944A8u;
    {
        const bool branch_taken_0x1944a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944a8) {
            ctx->pc = 0x194594u;
            goto label_194594;
        }
    }
    ctx->pc = 0x1944B0u;
    // 0x1944b0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1944b4: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x1944B4u;
    SET_GPR_U32(ctx, 31, 0x1944BCu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1944B4u, 0x1944BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944BCu;
label_1944bc:
    // 0x1944bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1944bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1944c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944c4: 0xc08c774  jal         func_231DD0
    ctx->pc = 0x1944C4u;
    SET_GPR_U32(ctx, 31, 0x1944CCu);
    ctx->pc = 0x231DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DD0u, 0x1944C4u, 0x1944CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944CCu;
label_1944cc:
    // 0x1944cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1944ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1944d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1944d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944d4: 0xc065170  jal         func_1945C0
    ctx->pc = 0x1944D4u;
    SET_GPR_U32(ctx, 31, 0x1944DCu);
    ctx->pc = 0x1945C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1945C0u, 0x1944D4u, 0x1944DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944DCu;
label_1944dc:
    // 0x1944dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1944dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1944e0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1944e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1944e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944e8: 0xc065198  jal         func_194660
    ctx->pc = 0x1944E8u;
    SET_GPR_U32(ctx, 31, 0x1944F0u);
    ctx->pc = 0x194660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194660u, 0x1944E8u, 0x1944F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944F0u;
label_1944f0:
    // 0x1944f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1944f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944f4: 0x240082a  slt         $at, $s2, $zero
    ctx->pc = 0x1944f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1944f8: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1944F8u;
    {
        const bool branch_taken_0x1944f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1944f8) {
            ctx->pc = 0x194584u;
            goto label_194584;
        }
    }
    ctx->pc = 0x194500u;
    // 0x194500: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194504: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19450c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19450cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x194510: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194514: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x194514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x194518: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19451c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x19451cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x194520: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x194520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x194524: 0xc0623d8  jal         func_188F60
    ctx->pc = 0x194524u;
    SET_GPR_U32(ctx, 31, 0x19452Cu);
    ctx->pc = 0x188F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F60u, 0x194524u, 0x19452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19452Cu;
label_19452c:
    // 0x19452c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19452cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x194530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194534: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x194534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x194538: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x194538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19453c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19453cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x194540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194544: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x194544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x194548: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19454c: 0xc0623d8  jal         func_188F60
    ctx->pc = 0x19454Cu;
    SET_GPR_U32(ctx, 31, 0x194554u);
    ctx->pc = 0x188F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F60u, 0x19454Cu, 0x194554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194554u;
label_194554:
    // 0x194554: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x194554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194558: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x194558u;
    SET_GPR_U32(ctx, 31, 0x194560u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x194558u, 0x194560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194560u;
label_194560:
    // 0x194560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194568: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19456c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x19456cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x194570: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x194570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194574: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x194574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194578: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x194578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19457c: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x19457Cu;
    SET_GPR_U32(ctx, 31, 0x194584u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x19457Cu, 0x194584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194584u;
label_194584:
    // 0x194584: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x194584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194588: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19458c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x19458Cu;
    SET_GPR_U32(ctx, 31, 0x194594u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x19458Cu, 0x194594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194594u;
label_194594:
    // 0x194594: 0x1600ffb8  bnez        $s0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x194594u;
    {
        const bool branch_taken_0x194594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x194594) {
            ctx->pc = 0x194478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194478;
        }
    }
    ctx->pc = 0x19459Cu;
    // 0x19459c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1945a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1945a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1945a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1945a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1945a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1945a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1945ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1945acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1945b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1945B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1945B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1945B8u;
    // 0x1945b8: 0x0  nop
    ctx->pc = 0x1945b8u;
    // NOP
    // 0x1945bc: 0x0  nop
    ctx->pc = 0x1945bcu;
    // NOP
    ctx->pc = 0x1945c0u;
}
