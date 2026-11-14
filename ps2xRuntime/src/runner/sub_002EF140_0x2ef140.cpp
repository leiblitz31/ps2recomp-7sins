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

// Function: sub_002EF140
// Address: 0x2ef140 - 0x2ef200
void sub_002EF140_0x2ef140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF140_0x2ef140");
#endif

    switch (ctx->pc) {
        case 0x2ef170u: goto label_2ef170;
        case 0x2ef1f0u: goto label_2ef1f0;
        default: break;
    }

    ctx->pc = 0x2ef140u;

    // 0x2ef140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef144: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2ef144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2ef148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ef150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ef154: 0x2451f6b4  addiu       $s1, $v0, -0x94C
    ctx->pc = 0x2ef154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964916));
    // 0x2ef158: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ef158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef15c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ef15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef160: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2ef160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ef168: 0xc0bf888  jal         func_2FE220
    ctx->pc = 0x2EF168u;
    SET_GPR_U32(ctx, 31, 0x2EF170u);
    ctx->pc = 0x2EF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF168u;
    // 0x2ef16c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE220u, 0x2EF168u, 0x2EF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF170u;
label_2ef170:
    // 0x2ef170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ef170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef174: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ef174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ef178: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF178u;
    {
        const bool branch_taken_0x2ef178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef178) {
            ctx->pc = 0x2EF17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF178u;
            // 0x2ef17c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF190u;
            goto label_2ef190;
        }
    }
    ctx->pc = 0x2EF180u;
    // 0x2ef180: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef184: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF184u;
    {
        const bool branch_taken_0x2ef184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef184) {
            ctx->pc = 0x2EF188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF184u;
            // 0x2ef188: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF18Cu;
            goto label_2ef18c;
        }
    }
    ctx->pc = 0x2EF18Cu;
label_2ef18c:
    // 0x2ef18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef190:
    // 0x2ef190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ef190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ef194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef198: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF198u;
        // 0x2ef19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF1A0u;
    // 0x2ef1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ef1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ef1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef1a8: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2ef1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2ef1ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ef1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1b0: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x2ef1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x2ef1b4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ef1b8: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x2ef1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x2ef1bc: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x2ef1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x2ef1c0: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x2ef1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x2ef1c4: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x2ef1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x2ef1c8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2ef1c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ef1cc: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2ef1ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ef1d0: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x2ef1d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ef1d4: 0xe7af001c  swc1        $f15, 0x1C($sp)
    ctx->pc = 0x2ef1d4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ef1d8: 0xe7b00020  swc1        $f16, 0x20($sp)
    ctx->pc = 0x2ef1d8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ef1dc: 0xe7b10024  swc1        $f17, 0x24($sp)
    ctx->pc = 0x2ef1dcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ef1e0: 0xe7b20028  swc1        $f18, 0x28($sp)
    ctx->pc = 0x2ef1e0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ef1e4: 0xe7b3002c  swc1        $f19, 0x2C($sp)
    ctx->pc = 0x2ef1e4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ef1e8: 0xc0bcea2  jal         func_2F3A88
    ctx->pc = 0x2EF1E8u;
    SET_GPR_U32(ctx, 31, 0x2EF1F0u);
    ctx->pc = 0x2EF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1E8u;
    // 0x2ef1ec: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A88u, 0x2EF1E8u, 0x2EF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1F0u;
label_2ef1f0:
    // 0x2ef1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F4u;
        // 0x2ef1f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF1FCu;
    // 0x2ef1fc: 0x0  nop
    ctx->pc = 0x2ef1fcu;
    // NOP
    ctx->pc = 0x2ef200u;
}
