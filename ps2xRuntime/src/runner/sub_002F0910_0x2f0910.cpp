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

// Function: sub_002F0910
// Address: 0x2f0910 - 0x2f09a0
void sub_002F0910_0x2f0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0910_0x2f0910");
#endif

    ctx->pc = 0x2f0910u;

    // 0x2f0910: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x2f0910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2f0914: 0x615c3  sra         $v0, $a2, 23
    ctx->pc = 0x2f0914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 23));
    // 0x2f0918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f091c: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x2f091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x2f0920: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x2f0920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2f0924: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F0924u;
    {
        const bool branch_taken_0x2f0924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0924u;
        // 0x2f0928: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0924) {
            ctx->pc = 0x2F0980u;
            goto label_2f0980;
        }
    }
    ctx->pc = 0x2F092Cu;
    // 0x2f092c: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F092Cu;
    {
        const bool branch_taken_0x2f092c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F092Cu;
        // 0x2f0930: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f092c) {
            ctx->pc = 0x2F0950u;
            goto label_2f0950;
        }
    }
    ctx->pc = 0x2F0934u;
    // 0x2f0934: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f0934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f0938: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2f0938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f093c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2f093cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2f0940: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f0940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0944: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F0944u;
    {
        const bool branch_taken_0x2f0944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0944u;
        // 0x2f0948: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0944) {
            ctx->pc = 0x2F0990u;
            goto label_2f0990;
        }
    }
    ctx->pc = 0x2F094Cu;
    // 0x2f094c: 0x0  nop
    ctx->pc = 0x2f094cu;
    // NOP
label_2f0950:
    // 0x2f0950: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f0954: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x2f0954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f0958: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2f0958u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2f095c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2f095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f0960: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2f0960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2f0964: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0964u;
    {
        const bool branch_taken_0x2f0964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0964u;
        // 0x2f0968: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0964) {
            ctx->pc = 0x2F0980u;
            goto label_2f0980;
        }
    }
    ctx->pc = 0x2F096Cu;
    // 0x2f096c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0970: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2f0970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2f0974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0974u;
    {
        const bool branch_taken_0x2f0974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0974u;
        // 0x2f0978: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0974) {
            ctx->pc = 0x2F0994u;
            goto label_2f0994;
        }
    }
    ctx->pc = 0x2F097Cu;
    // 0x2f097c: 0x0  nop
    ctx->pc = 0x2f097cu;
    // NOP
label_2f0980:
    // 0x2f0980: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2f0980u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2f0984: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f0984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f0988: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2f0988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f098c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2f098cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0990:
    // 0x2f0990: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2f0990u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_2f0994:
    // 0x2f0994: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0994u;
        // 0x2f0998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F099Cu;
    // 0x2f099c: 0x0  nop
    ctx->pc = 0x2f099cu;
    // NOP
    ctx->pc = 0x2f09a0u;
}
