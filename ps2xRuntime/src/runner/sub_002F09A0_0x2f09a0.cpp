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

// Function: sub_002F09A0
// Address: 0x2f09a0 - 0x2f0a68
void sub_002F09A0_0x2f09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F09A0_0x2f09a0");
#endif

    switch (ctx->pc) {
        case 0x2f0a54u: goto label_2f0a54;
        default: break;
    }

    ctx->pc = 0x2f09a0u;

    // 0x2f09a0: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x2f09a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2f09a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f09a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f09a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f09ac: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x2f09acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f09b0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2f09b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f09b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f09b8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2f09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2f09bc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2f09bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f09c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f09c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f09c4: 0x22dc2  srl         $a1, $v0, 23
    ctx->pc = 0x2f09c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x2f09c8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2f09c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f09cc: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2f09ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2f09d0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F09D0u;
    {
        const bool branch_taken_0x2f09d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09D0u;
        // 0x2f09d4: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09d0) {
            ctx->pc = 0x2F0A58u;
            goto label_2f0a58;
        }
    }
    ctx->pc = 0x2F09D8u;
    // 0x2f09d8: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2f09d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f09dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F09DCu;
    {
        const bool branch_taken_0x2f09dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09DCu;
        // 0x2f09e0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09dc) {
            ctx->pc = 0x2F09F8u;
            goto label_2f09f8;
        }
    }
    ctx->pc = 0x2F09E4u;
    // 0x2f09e4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2f09e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2f09e8: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x2f09e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x2f09ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f09ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f09f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F09F0u;
    {
        const bool branch_taken_0x2f09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f09f0) {
            ctx->pc = 0x2F0A4Cu;
            goto label_2f0a4c;
        }
    }
    ctx->pc = 0x2F09F8u;
label_2f09f8:
    // 0x2f09f8: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F09F8u;
    {
        const bool branch_taken_0x2f09f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2F09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09F8u;
        // 0x2f09fc: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09f8) {
            ctx->pc = 0x2F0A20u;
            goto label_2f0a20;
        }
    }
    ctx->pc = 0x2F0A00u;
    // 0x2f0a00: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x2f0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x2f0a04: 0x51dc0  sll         $v1, $a1, 23
    ctx->pc = 0x2f0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
    // 0x2f0a08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f0a0c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2f0a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f0a10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f0a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f0a14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f0a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f0a18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F0A18u;
    {
        const bool branch_taken_0x2f0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A18u;
        // 0x2f0a1c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a18) {
            ctx->pc = 0x2F0A58u;
            goto label_2f0a58;
        }
    }
    ctx->pc = 0x2F0A20u;
label_2f0a20:
    // 0x2f0a20: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2f0a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f0a24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0A24u;
    {
        const bool branch_taken_0x2f0a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A24u;
        // 0x2f0a28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0a24) {
            ctx->pc = 0x2F0A40u;
            goto label_2f0a40;
        }
    }
    ctx->pc = 0x2F0A2Cu;
    // 0x2f0a2c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2f0a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2f0a30: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x2f0a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x2f0a34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f0a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f0a38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0A38u;
    {
        const bool branch_taken_0x2f0a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a38) {
            ctx->pc = 0x2F0A4Cu;
            goto label_2f0a4c;
        }
    }
    ctx->pc = 0x2F0A40u;
label_2f0a40:
    // 0x2f0a40: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x2f0a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x2f0a44: 0x3421425f  ori         $at, $at, 0x425F
    ctx->pc = 0x2f0a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16991);
    // 0x2f0a48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f0a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f0a4c:
    // 0x2f0a4c: 0xc0bc234  jal         func_2F08D0
    ctx->pc = 0x2F0A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F0A54u);
    ctx->pc = 0x2F0A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A4Cu;
    // 0x2f0a50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F08D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F08D0u, 0x2F0A4Cu, 0x2F0A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A54u;
label_2f0a54:
    // 0x2f0a54: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f0a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2f0a58:
    // 0x2f0a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0a5c: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x2f0a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f0a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A60u;
        // 0x2f0a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0A68u;
}
