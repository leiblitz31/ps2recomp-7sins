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

// Function: sub_0030E2E8
// Address: 0x30e2e8 - 0x30e3c0
void sub_0030E2E8_0x30e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E2E8_0x30e2e8");
#endif

    ctx->pc = 0x30e2e8u;

    // 0x30e2e8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x30e2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e2ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30e2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30e2f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e2f8: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x30e2f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30e2fc: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x30e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x30e300: 0x2465ff81  addiu       $a1, $v1, -0x7F
    ctx->pc = 0x30e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x30e304: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x30e304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x30e308: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x30E308u;
    {
        const bool branch_taken_0x30e308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E308u;
        // 0x30e30c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e308) {
            ctx->pc = 0x30E3B8u;
            goto label_30e3b8;
        }
    }
    ctx->pc = 0x30E310u;
    // 0x30e310: 0x4a30013  bgezl       $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E310u;
    {
        const bool branch_taken_0x30e310 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x30e310) {
            ctx->pc = 0x30E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E310u;
            // 0x30e314: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E360u;
            goto label_30e360;
        }
    }
    ctx->pc = 0x30E318u;
    // 0x30e318: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30e31c: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30e31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30e320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e324: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e328: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30e328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30e32c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e330: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x30E330u;
    {
        const bool branch_taken_0x30e330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e330) {
            ctx->pc = 0x30E3B0u;
            goto label_30e3b0;
        }
    }
    ctx->pc = 0x30E338u;
    // 0x30e338: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E338u;
    {
        const bool branch_taken_0x30e338 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x30E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E338u;
        // 0x30e33c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e338) {
            ctx->pc = 0x30E348u;
            goto label_30e348;
        }
    }
    ctx->pc = 0x30E340u;
    // 0x30e340: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30E340u;
    {
        const bool branch_taken_0x30e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E340u;
        // 0x30e344: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e340) {
            ctx->pc = 0x30E3B0u;
            goto label_30e3b0;
        }
    }
    ctx->pc = 0x30E348u;
label_30e348:
    // 0x30e348: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e34c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x30e34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30e350: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x30E350u;
    {
        const bool branch_taken_0x30e350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e350) {
            ctx->pc = 0x30E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E350u;
            // 0x30e354: 0x3c043f80  lui         $a0, 0x3F80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E3B0u;
            goto label_30e3b0;
        }
    }
    ctx->pc = 0x30E358u;
    // 0x30e358: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30E358u;
    {
        const bool branch_taken_0x30e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e358) {
            ctx->pc = 0x30E3B0u;
            goto label_30e3b0;
        }
    }
    ctx->pc = 0x30E360u;
label_30e360:
    // 0x30e360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e364: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x30e364u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x30e368: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x30e368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x30e36c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30E36Cu;
    {
        const bool branch_taken_0x30e36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E36Cu;
        // 0x30e370: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e36c) {
            ctx->pc = 0x30E3B8u;
            goto label_30e3b8;
        }
    }
    ctx->pc = 0x30E374u;
    // 0x30e374: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30e378: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30e378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30e37c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e384: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30e384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30e388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e38c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30E38Cu;
    {
        const bool branch_taken_0x30e38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e38c) {
            ctx->pc = 0x30E3B0u;
            goto label_30e3b0;
        }
    }
    ctx->pc = 0x30E394u;
    // 0x30e394: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E394u;
    {
        const bool branch_taken_0x30e394 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x30E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E394u;
        // 0x30e398: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e394) {
            ctx->pc = 0x30E3ACu;
            goto label_30e3ac;
        }
    }
    ctx->pc = 0x30E39Cu;
    // 0x30e39c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30e3a0: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x30e3a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x30e3a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e3a8: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x30e3a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_30e3ac:
    // 0x30e3ac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x30e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_30e3b0:
    // 0x30e3b0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x30e3b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e3b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30e3b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30e3b8:
    // 0x30e3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x30E3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E3C0u;
}
