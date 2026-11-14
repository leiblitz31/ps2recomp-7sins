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

// Function: sub_00168B00
// Address: 0x168b00 - 0x168bc0
void sub_00168B00_0x168b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168B00_0x168b00");
#endif

    switch (ctx->pc) {
        case 0x168bacu: goto label_168bac;
        default: break;
    }

    ctx->pc = 0x168b00u;

    // 0x168b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x168b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x168b0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x168b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x168b10: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168b14: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x168b14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x168b18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x168B18u;
    {
        const bool branch_taken_0x168b18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168b18) {
            ctx->pc = 0x168B28u;
            goto label_168b28;
        }
    }
    ctx->pc = 0x168B20u;
    // 0x168b20: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x168b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x168b24: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x168b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_168b28:
    // 0x168b28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x168b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b2c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x168b30: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x168B30u;
    {
        const bool branch_taken_0x168b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b30) {
            ctx->pc = 0x168BACu;
            goto label_168bac;
        }
    }
    ctx->pc = 0x168B38u;
    // 0x168b38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x168b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168b3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168B3Cu;
    {
        const bool branch_taken_0x168b3c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x168b3c) {
            ctx->pc = 0x168B58u;
            goto label_168b58;
        }
    }
    ctx->pc = 0x168B44u;
    // 0x168b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b48: 0x0  nop
    ctx->pc = 0x168b48u;
    // NOP
    // 0x168b4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x168b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168B50u;
    {
        const bool branch_taken_0x168b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b50) {
            ctx->pc = 0x168B74u;
            goto label_168b74;
        }
    }
    ctx->pc = 0x168B58u;
label_168b58:
    // 0x168b58: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x168b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x168b5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x168b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x168b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x168b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x168b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b68: 0x0  nop
    ctx->pc = 0x168b68u;
    // NOP
    // 0x168b6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x168b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168b70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x168b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_168b74:
    // 0x168b74: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x168b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x168b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b7c: 0x0  nop
    ctx->pc = 0x168b7cu;
    // NOP
    // 0x168b80: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x168b80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x168b84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x168b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x168b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b8c: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x168b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x168b90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168b94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168b98: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x168b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ba0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ba4: 0xc08c544  jal         func_231510
    ctx->pc = 0x168BA4u;
    SET_GPR_U32(ctx, 31, 0x168BACu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x168BA4u, 0x168BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BACu;
label_168bac:
    // 0x168bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168bb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x168BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168BBCu;
    // 0x168bbc: 0x0  nop
    ctx->pc = 0x168bbcu;
    // NOP
    ctx->pc = 0x168bc0u;
}
