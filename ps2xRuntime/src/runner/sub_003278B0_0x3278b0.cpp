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

// Function: sub_003278B0
// Address: 0x3278b0 - 0x327a08
void sub_003278B0_0x3278b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003278B0_0x3278b0");
#endif

    switch (ctx->pc) {
        case 0x32793cu: goto label_32793c;
        case 0x327970u: goto label_327970;
        case 0x3279b8u: goto label_3279b8;
        case 0x3279e8u: goto label_3279e8;
        default: break;
    }

    ctx->pc = 0x3278b0u;

    // 0x3278b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3278b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3278b4: 0x8f82a650  lw          $v0, -0x59B0($gp)
    ctx->pc = 0x3278b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
    // 0x3278b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3278b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3278bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3278bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3278c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3278c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3278c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3278c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3278c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3278c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278cc: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x3278ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3278d0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3278d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3278d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3278d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3278d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3278d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3278dc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3278DCu;
    {
        const bool branch_taken_0x3278dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3278E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278DCu;
        // 0x3278e0: 0x2650004c  addiu       $s0, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278dc) {
            ctx->pc = 0x3278F4u;
            goto label_3278f4;
        }
    }
    ctx->pc = 0x3278E4u;
    // 0x3278e4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3278e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3278e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3278e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3278ec: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3278ECu;
    {
        const bool branch_taken_0x3278ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278ECu;
        // 0x3278f0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278ec) {
            ctx->pc = 0x3279E8u;
            goto label_3279e8;
        }
    }
    ctx->pc = 0x3278F4u;
label_3278f4:
    // 0x3278f4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3278f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278f8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3278f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3278fc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3278fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x327900: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x327900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x327904: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x327904u;
    {
        const bool branch_taken_0x327904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x327908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327904u;
        // 0x327908: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327904) {
            ctx->pc = 0x3279E8u;
            goto label_3279e8;
        }
    }
    ctx->pc = 0x32790Cu;
    // 0x32790c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x32790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x327910: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x327910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x327914: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x327918: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x327918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x32791c: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x32791cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x327920: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327920u;
    {
        const bool branch_taken_0x327920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x327924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327920u;
        // 0x327924: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327920) {
            ctx->pc = 0x32793Cu;
            goto label_32793c;
        }
    }
    ctx->pc = 0x327928u;
    // 0x327928: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x327928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32792c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32792Cu;
    {
        const bool branch_taken_0x32792c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32792c) {
            ctx->pc = 0x327930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32792Cu;
            // 0x327930: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327940u;
            goto label_327940;
        }
    }
    ctx->pc = 0x327934u;
    // 0x327934: 0xc106794  jal         func_419E50
    ctx->pc = 0x327934u;
    SET_GPR_U32(ctx, 31, 0x32793Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327934u, 0x32793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32793Cu;
label_32793c:
    // 0x32793c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327940:
    // 0x327940: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327944: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x327944u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x327948: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x32794c: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x32794cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x327950: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x327950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x327954: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x327954u;
    {
        const bool branch_taken_0x327954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327954u;
        // 0x327958: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327954) {
            ctx->pc = 0x327970u;
            goto label_327970;
        }
    }
    ctx->pc = 0x32795Cu;
    // 0x32795c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x327960: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x327960u;
    {
        const bool branch_taken_0x327960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x327960) {
            ctx->pc = 0x327964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327960u;
            // 0x327964: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327974u;
            goto label_327974;
        }
    }
    ctx->pc = 0x327968u;
    // 0x327968: 0xc106794  jal         func_419E50
    ctx->pc = 0x327968u;
    SET_GPR_U32(ctx, 31, 0x327970u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327968u, 0x327970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327970u;
label_327970:
    // 0x327970: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327974:
    // 0x327974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x327978: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x327978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32797c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327984: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x327984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x327988: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x32798c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327990: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x327990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x327994: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x327994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x327998: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x327998u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32799c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32799Cu;
    {
        const bool branch_taken_0x32799c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3279A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32799Cu;
        // 0x3279a0: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32799c) {
            ctx->pc = 0x3279B8u;
            goto label_3279b8;
        }
    }
    ctx->pc = 0x3279A4u;
    // 0x3279a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3279a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3279a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3279A8u;
    {
        const bool branch_taken_0x3279a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3279a8) {
            ctx->pc = 0x3279ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3279A8u;
            // 0x3279ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3279BCu;
            goto label_3279bc;
        }
    }
    ctx->pc = 0x3279B0u;
    // 0x3279b0: 0xc106794  jal         func_419E50
    ctx->pc = 0x3279B0u;
    SET_GPR_U32(ctx, 31, 0x3279B8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3279B0u, 0x3279B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279B8u;
label_3279b8:
    // 0x3279b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3279bc:
    // 0x3279bc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3279bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3279c0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3279c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3279c4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3279c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3279c8: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x3279c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3279cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3279CCu;
    {
        const bool branch_taken_0x3279cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3279D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279CCu;
        // 0x3279d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279cc) {
            ctx->pc = 0x3279E8u;
            goto label_3279e8;
        }
    }
    ctx->pc = 0x3279D4u;
    // 0x3279d4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3279d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3279d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3279D8u;
    {
        const bool branch_taken_0x3279d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279D8u;
        // 0x3279dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279d8) {
            ctx->pc = 0x3279ECu;
            goto label_3279ec;
        }
    }
    ctx->pc = 0x3279E0u;
    // 0x3279e0: 0xc106794  jal         func_419E50
    ctx->pc = 0x3279E0u;
    SET_GPR_U32(ctx, 31, 0x3279E8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3279E0u, 0x3279E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279E8u;
label_3279e8:
    // 0x3279e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3279e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3279ec:
    // 0x3279ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3279ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3279f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3279f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3279f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3279f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3279f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3279f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3279fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3279FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279FCu;
        // 0x327a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3279FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327A04u;
    // 0x327a04: 0x0  nop
    ctx->pc = 0x327a04u;
    // NOP
    ctx->pc = 0x327a08u;
}
