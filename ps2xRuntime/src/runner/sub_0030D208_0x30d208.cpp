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

// Function: sub_0030D208
// Address: 0x30d208 - 0x30d2d8
void sub_0030D208_0x30d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D208_0x30d208");
#endif

    switch (ctx->pc) {
        case 0x30d280u: goto label_30d280;
        default: break;
    }

    ctx->pc = 0x30d208u;

    // 0x30d208: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x30d208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30d20c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x30d20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d210: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30d214: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x30d218: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30d21c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30d21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30d220: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30d220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x30d224: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x30d224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30d228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D228u;
    {
        const bool branch_taken_0x30d228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D228u;
        // 0x30d22c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d228) {
            ctx->pc = 0x30D248u;
            goto label_30d248;
        }
    }
    ctx->pc = 0x30D230u;
    // 0x30d230: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D230u;
    {
        const bool branch_taken_0x30d230 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D230u;
        // 0x30d234: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d230) {
            ctx->pc = 0x30D250u;
            goto label_30d250;
        }
    }
    ctx->pc = 0x30D238u;
    // 0x30d238: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x30d238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x30d23c: 0x0  nop
    ctx->pc = 0x30d23cu;
    // NOP
    // 0x30d240: 0x0  nop
    ctx->pc = 0x30d240u;
    // NOP
    // 0x30d244: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x30d244u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_30d248:
    // 0x30d248: 0x3e00008  jr          $ra
    ctx->pc = 0x30D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D250u;
label_30d250:
    // 0x30d250: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x30d250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x30d254: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30d254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30d258: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x30d258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x30d25c: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x30d25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x30d260: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x30d260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30d264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d268: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x30d268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x30d26c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x30d26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x30d270: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x30d270u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x30d274: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30d274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30d278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d27c: 0x0  nop
    ctx->pc = 0x30d27cu;
    // NOP
label_30d280:
    // 0x30d280: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x30d280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x30d284: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x30d284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30d288: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D288u;
    {
        const bool branch_taken_0x30d288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d288) {
            ctx->pc = 0x30D28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D288u;
            // 0x30d28c: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D2A0u;
            goto label_30d2a0;
        }
    }
    ctx->pc = 0x30D290u;
    // 0x30d290: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x30d290u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30d294: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x30d294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d298: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x30d298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x30d29c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x30d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_30d2a0:
    // 0x30d2a0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30D2A0u;
    {
        const bool branch_taken_0x30d2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2A0u;
        // 0x30d2a4: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a0) {
            ctx->pc = 0x30D280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d280;
        }
    }
    ctx->pc = 0x30D2A8u;
    // 0x30d2a8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30D2A8u;
    {
        const bool branch_taken_0x30d2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2A8u;
        // 0x30d2ac: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a8) {
            ctx->pc = 0x30D2B4u;
            goto label_30d2b4;
        }
    }
    ctx->pc = 0x30D2B0u;
    // 0x30d2b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x30d2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_30d2b4:
    // 0x30d2b4: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x30d2b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x30d2b8: 0x71dc0  sll         $v1, $a3, 23
    ctx->pc = 0x30d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 23));
    // 0x30d2bc: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x30d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x30d2c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30d2c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30d2c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30d2c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D2D4u;
    // 0x30d2d4: 0x0  nop
    ctx->pc = 0x30d2d4u;
    // NOP
    ctx->pc = 0x30d2d8u;
}
