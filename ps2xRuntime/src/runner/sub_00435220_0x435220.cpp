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

// Function: sub_00435220
// Address: 0x435220 - 0x435290
void sub_00435220_0x435220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435220_0x435220");
#endif

    ctx->pc = 0x435220u;

    // 0x435220: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x435220u;
    {
        const bool branch_taken_0x435220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x435220) {
            ctx->pc = 0x435288u;
            goto label_435288;
        }
    }
    ctx->pc = 0x435228u;
    // 0x435228: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x435228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43522c: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x43522Cu;
    {
        const bool branch_taken_0x43522c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x43522c) {
            ctx->pc = 0x435288u;
            goto label_435288;
        }
    }
    ctx->pc = 0x435234u;
    // 0x435234: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x435234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x435238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x435238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43523c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x43523cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x435240: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x435240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x435244: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x435244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x435248: 0x28a2f800  slti        $v0, $a1, -0x800
    ctx->pc = 0x435248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294965248) ? 1 : 0);
    // 0x43524c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43524Cu;
    {
        const bool branch_taken_0x43524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43524Cu;
        // 0x435250: 0x28a30800  slti        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43524c) {
            ctx->pc = 0x43525Cu;
            goto label_43525c;
        }
    }
    ctx->pc = 0x435254u;
    // 0x435254: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x435254u;
    {
        const bool branch_taken_0x435254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435254u;
        // 0x435258: 0x2405f800  addiu       $a1, $zero, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435254) {
            ctx->pc = 0x435264u;
            goto label_435264;
        }
    }
    ctx->pc = 0x43525Cu;
label_43525c:
    // 0x43525c: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x43525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x435260: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x435260u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_435264:
    // 0x435264: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x435264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x435268: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x435268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43526c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x43526cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x435270: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x435270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x435274: 0x94640014  lhu         $a0, 0x14($v1)
    ctx->pc = 0x435274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x435278: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x435278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x43527c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x43527cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x435280: 0x3e00008  jr          $ra
    ctx->pc = 0x435280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435280u;
        // 0x435284: 0xa4640014  sh          $a0, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435288u;
label_435288:
    // 0x435288: 0x3e00008  jr          $ra
    ctx->pc = 0x435288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435288u;
        // 0x43528c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435290u;
}
