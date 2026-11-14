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

// Function: sub_004AB190
// Address: 0x4ab190 - 0x4ab238
void sub_004AB190_0x4ab190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB190_0x4ab190");
#endif

    ctx->pc = 0x4ab190u;

    // 0x4ab190: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4ab190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ab194: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ab194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab198: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x4ab198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ab19c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4ab19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4ab1a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4ab1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ab1a4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4ab1a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4ab1a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4ab1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4ab1ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4ab1acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4ab1b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4ab1b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4ab1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ab1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ab1b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4ab1b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ab1bc: 0x0  nop
    ctx->pc = 0x4ab1bcu;
    // NOP
    // 0x4ab1c0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x4AB1C0u;
    {
        const bool branch_taken_0x4ab1c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB1C0u;
        // 0x4ab1c4: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab1c0) {
            ctx->pc = 0x4AB230u;
            goto label_4ab230;
        }
    }
    ctx->pc = 0x4AB1C8u;
    // 0x4ab1c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ab1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab1cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab1d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ab1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ab1d4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4ab1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab1d8: 0x31dc2  srl         $v1, $v1, 23
    ctx->pc = 0x4ab1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x4ab1dc: 0x2463ff81  addiu       $v1, $v1, -0x7F
    ctx->pc = 0x4ab1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x4ab1e0: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4ab1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ab1e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4ab1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4ab1e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB1E8u;
    {
        const bool branch_taken_0x4ab1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB1E8u;
        // 0x4ab1ec: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab1e8) {
            ctx->pc = 0x4AB200u;
            goto label_4ab200;
        }
    }
    ctx->pc = 0x4AB1F0u;
    // 0x4ab1f0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4ab1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4ab1f4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4ab1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4ab1f8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ab1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ab1fc: 0x0  nop
    ctx->pc = 0x4ab1fcu;
    // NOP
label_4ab200:
    // 0x4ab200: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x4ab200u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x4ab204: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4ab208: 0x24426100  addiu       $v0, $v0, 0x6100
    ctx->pc = 0x4ab208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24832));
    // 0x4ab20c: 0x51c43  sra         $v1, $a1, 17
    ctx->pc = 0x4ab20cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 17));
    // 0x4ab210: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4ab210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4ab214: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x4ab214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x4ab218: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ab218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ab21c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x4ab21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x4ab220: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ab220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ab224: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ab224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ab228: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ab228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ab22c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ab22cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4ab230:
    // 0x4ab230: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB238u;
}
