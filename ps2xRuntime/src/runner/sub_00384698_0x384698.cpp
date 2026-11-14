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

// Function: sub_00384698
// Address: 0x384698 - 0x3848a8
void sub_00384698_0x384698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384698_0x384698");
#endif

    switch (ctx->pc) {
        case 0x3846d0u: goto label_3846d0;
        case 0x3846e8u: goto label_3846e8;
        case 0x3846f8u: goto label_3846f8;
        case 0x384708u: goto label_384708;
        case 0x384738u: goto label_384738;
        case 0x3847d0u: goto label_3847d0;
        case 0x384850u: goto label_384850;
        case 0x384868u: goto label_384868;
        default: break;
    }

    ctx->pc = 0x384698u;

    // 0x384698: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x384698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x38469c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x38469cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3846a0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3846a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x3846a4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3846a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x3846a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3846a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3846ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3846acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3846b0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3846b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x3846b4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3846b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x3846b8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3846b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x3846bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3846bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3846c0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3846c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x3846c4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3846c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3846c8: 0xc10480a  jal         func_412028
    ctx->pc = 0x3846C8u;
    SET_GPR_U32(ctx, 31, 0x3846D0u);
    ctx->pc = 0x3846CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846C8u;
    // 0x3846cc: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3846C8u, 0x3846D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846D0u;
label_3846d0:
    // 0x3846d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3846D0u;
    {
        const bool branch_taken_0x3846d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846D0u;
        // 0x3846d4: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846d0) {
            ctx->pc = 0x3846E0u;
            goto label_3846e0;
        }
    }
    ctx->pc = 0x3846D8u;
    // 0x3846d8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3846D8u;
    {
        const bool branch_taken_0x3846d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3846DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846D8u;
        // 0x3846dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846d8) {
            ctx->pc = 0x38487Cu;
            goto label_38487c;
        }
    }
    ctx->pc = 0x3846E0u;
label_3846e0:
    // 0x3846e0: 0xc0f0600  jal         func_3C1800
    ctx->pc = 0x3846E0u;
    SET_GPR_U32(ctx, 31, 0x3846E8u);
    ctx->pc = 0x3846E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846E0u;
    // 0x3846e4: 0x2484ad08  addiu       $a0, $a0, -0x52F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1800u, 0x3846E0u, 0x3846E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846E8u;
label_3846e8:
    // 0x3846e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3846E8u;
    {
        const bool branch_taken_0x3846e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3846ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846E8u;
        // 0x3846ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846e8) {
            ctx->pc = 0x3847A8u;
            goto label_3847a8;
        }
    }
    ctx->pc = 0x3846F0u;
    // 0x3846f0: 0xc0f06b8  jal         func_3C1AE0
    ctx->pc = 0x3846F0u;
    SET_GPR_U32(ctx, 31, 0x3846F8u);
    ctx->pc = 0x3846F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846F0u;
    // 0x3846f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1AE0u, 0x3846F0u, 0x3846F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846F8u;
label_3846f8:
    // 0x3846f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3846F8u;
    {
        const bool branch_taken_0x3846f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3846FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3846F8u;
        // 0x3846fc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846f8) {
            ctx->pc = 0x384710u;
            goto label_384710;
        }
    }
    ctx->pc = 0x384700u;
    // 0x384700: 0xc0e14b2  jal         func_3852C8
    ctx->pc = 0x384700u;
    SET_GPR_U32(ctx, 31, 0x384708u);
    ctx->pc = 0x384704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384700u;
    // 0x384704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3852C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3852C8u, 0x384700u, 0x384708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384708u;
label_384708:
    // 0x384708: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x384708u;
    {
        const bool branch_taken_0x384708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384708u;
        // 0x38470c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384708) {
            ctx->pc = 0x384874u;
            goto label_384874;
        }
    }
    ctx->pc = 0x384710u;
label_384710:
    // 0x384710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x384710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x384714: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x384714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x384718: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x384718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38471c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x38471cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x384720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384728: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x384728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38472c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x38472cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x384730: 0xc0e145c  jal         func_385170
    ctx->pc = 0x384730u;
    SET_GPR_U32(ctx, 31, 0x384738u);
    ctx->pc = 0x384734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384730u;
    // 0x384734: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385170u, 0x384730u, 0x384738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384738u;
label_384738:
    // 0x384738: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x384738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38473c: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x38473Cu;
    {
        const bool branch_taken_0x38473c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x384740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38473Cu;
        // 0x384740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38473c) {
            ctx->pc = 0x38486Cu;
            goto label_38486c;
        }
    }
    ctx->pc = 0x384744u;
    // 0x384744: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x384744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384748: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x384748u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x38474c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x38474cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x384750: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x384750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x384754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x384754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x384758: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x384758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x38475c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x38475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x384760: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x384760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x384764: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x384764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x384768: 0xe6740028  swc1        $f20, 0x28($s3)
    ctx->pc = 0x384768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x38476c: 0xe6740014  swc1        $f20, 0x14($s3)
    ctx->pc = 0x38476cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x384770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x384770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x384774: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x384774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x384778: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x384778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x38477c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x38477cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x384780: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x384780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x384784: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x384784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x384788: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x384788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x38478c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x38478cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x384790: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x384790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x384794: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x384794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x384798: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x384798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x38479c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x38479Cu;
    {
        const bool branch_taken_0x38479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3847A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38479Cu;
        // 0x3847a0: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38479c) {
            ctx->pc = 0x384838u;
            goto label_384838;
        }
    }
    ctx->pc = 0x3847A4u;
    // 0x3847a4: 0x0  nop
    ctx->pc = 0x3847a4u;
    // NOP
label_3847a8:
    // 0x3847a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3847a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3847ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3847acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3847b0: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x3847b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3847b4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x3847b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x3847b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3847b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3847bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3847c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3847c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3847c4: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x3847c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x3847c8: 0xc0e145c  jal         func_385170
    ctx->pc = 0x3847C8u;
    SET_GPR_U32(ctx, 31, 0x3847D0u);
    ctx->pc = 0x3847CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847C8u;
    // 0x3847cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385170u, 0x3847C8u, 0x3847D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847D0u;
label_3847d0:
    // 0x3847d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3847d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847d4: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x3847D4u;
    {
        const bool branch_taken_0x3847d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3847D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3847D4u;
        // 0x3847d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3847d4) {
            ctx->pc = 0x38486Cu;
            goto label_38486c;
        }
    }
    ctx->pc = 0x3847DCu;
    // 0x3847dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3847dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3847e0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x3847e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3847e4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3847e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3847e8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x3847e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3847ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3847ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3847f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3847f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3847f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3847f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3847f8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x3847f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3847fc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3847fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x384800: 0xe6740028  swc1        $f20, 0x28($s3)
    ctx->pc = 0x384800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x384804: 0xe6740014  swc1        $f20, 0x14($s3)
    ctx->pc = 0x384804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x384808: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x384808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38480c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x38480cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x384810: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x384810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x384814: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x384814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x384818: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x384818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x38481c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x38481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x384820: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x384820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x384824: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x384824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x384828: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x384828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x38482c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x38482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x384830: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x384830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x384834: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x384834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_384838:
    // 0x384838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38483c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38483cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x384840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x384840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384848: 0xc0e0fa8  jal         func_383EA0
    ctx->pc = 0x384848u;
    SET_GPR_U32(ctx, 31, 0x384850u);
    ctx->pc = 0x38484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384848u;
    // 0x38484c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383EA0u, 0x384848u, 0x384850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384850u;
label_384850:
    // 0x384850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384854: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x384854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384858: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x384858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38485c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x38485cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384860: 0xc0e0fa8  jal         func_383EA0
    ctx->pc = 0x384860u;
    SET_GPR_U32(ctx, 31, 0x384868u);
    ctx->pc = 0x384864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384860u;
    // 0x384864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383EA0u, 0x384860u, 0x384868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384868u;
label_384868:
    // 0x384868: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x384868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38486c:
    // 0x38486c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x38486cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x384870: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x384870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_384874:
    // 0x384874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x384874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384878: 0x2a3100b  movn        $v0, $s5, $v1
    ctx->pc = 0x384878u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 21));
label_38487c:
    // 0x38487c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x38487cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x384880: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x384880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x384884: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x384884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x384888: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x384888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x38488c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x38488cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x384890: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x384890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x384894: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x384894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x384898: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x384898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38489c: 0x3e00008  jr          $ra
    ctx->pc = 0x38489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3848A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38489Cu;
        // 0x3848a0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3848A4u;
    // 0x3848a4: 0x0  nop
    ctx->pc = 0x3848a4u;
    // NOP
    ctx->pc = 0x3848a8u;
}
