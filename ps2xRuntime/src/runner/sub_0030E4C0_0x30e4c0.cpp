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

// Function: sub_0030E4C0
// Address: 0x30e4c0 - 0x30e598
void sub_0030E4C0_0x30e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E4C0_0x30e4c0");
#endif

    ctx->pc = 0x30e4c0u;

    // 0x30e4c0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x30e4c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e4c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e4c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30e4cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e4d0: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x30e4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30e4d4: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x30e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x30e4d8: 0x2465ff81  addiu       $a1, $v1, -0x7F
    ctx->pc = 0x30e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x30e4dc: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x30e4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x30e4e0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x30E4E0u;
    {
        const bool branch_taken_0x30e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4E0u;
        // 0x30e4e4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4e0) {
            ctx->pc = 0x30E590u;
            goto label_30e590;
        }
    }
    ctx->pc = 0x30E4E8u;
    // 0x30e4e8: 0x4a30013  bgezl       $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E4E8u;
    {
        const bool branch_taken_0x30e4e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x30e4e8) {
            ctx->pc = 0x30E4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E4E8u;
            // 0x30e4ec: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E538u;
            goto label_30e538;
        }
    }
    ctx->pc = 0x30E4F0u;
    // 0x30e4f0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30e4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30e4f4: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30e4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30e4f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e4fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e500: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30e500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30e504: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e508: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x30E508u;
    {
        const bool branch_taken_0x30e508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e508) {
            ctx->pc = 0x30E588u;
            goto label_30e588;
        }
    }
    ctx->pc = 0x30E510u;
    // 0x30e510: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E510u;
    {
        const bool branch_taken_0x30e510 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x30E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E510u;
        // 0x30e514: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e510) {
            ctx->pc = 0x30E520u;
            goto label_30e520;
        }
    }
    ctx->pc = 0x30E518u;
    // 0x30e518: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30E518u;
    {
        const bool branch_taken_0x30e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E518u;
        // 0x30e51c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e518) {
            ctx->pc = 0x30E588u;
            goto label_30e588;
        }
    }
    ctx->pc = 0x30E520u;
label_30e520:
    // 0x30e520: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e524: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x30e524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x30e528: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x30E528u;
    {
        const bool branch_taken_0x30e528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e528) {
            ctx->pc = 0x30E52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E528u;
            // 0x30e52c: 0x3c04bf80  lui         $a0, 0xBF80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E588u;
            goto label_30e588;
        }
    }
    ctx->pc = 0x30E530u;
    // 0x30e530: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30E530u;
    {
        const bool branch_taken_0x30e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e530) {
            ctx->pc = 0x30E588u;
            goto label_30e588;
        }
    }
    ctx->pc = 0x30E538u;
label_30e538:
    // 0x30e538: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e53c: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x30e53cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x30e540: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x30e540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x30e544: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30E544u;
    {
        const bool branch_taken_0x30e544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E544u;
        // 0x30e548: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e544) {
            ctx->pc = 0x30E590u;
            goto label_30e590;
        }
    }
    ctx->pc = 0x30E54Cu;
    // 0x30e54c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30e54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30e550: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30e550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30e554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30e554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e558: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e55c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30e55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30e560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e564: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30E564u;
    {
        const bool branch_taken_0x30e564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e564) {
            ctx->pc = 0x30E588u;
            goto label_30e588;
        }
    }
    ctx->pc = 0x30E56Cu;
    // 0x30e56c: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E56Cu;
    {
        const bool branch_taken_0x30e56c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x30E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E56Cu;
        // 0x30e570: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e56c) {
            ctx->pc = 0x30E584u;
            goto label_30e584;
        }
    }
    ctx->pc = 0x30E574u;
    // 0x30e574: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30e574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30e578: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x30e578u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x30e57c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e580: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x30e580u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_30e584:
    // 0x30e584: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x30e584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_30e588:
    // 0x30e588: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x30e588u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e58c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30e58cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30e590:
    // 0x30e590: 0x3e00008  jr          $ra
    ctx->pc = 0x30E590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E598u;
}
