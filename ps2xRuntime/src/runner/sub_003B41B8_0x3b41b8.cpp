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

// Function: sub_003B41B8
// Address: 0x3b41b8 - 0x3b4298
void sub_003B41B8_0x3b41b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B41B8_0x3b41b8");
#endif

    switch (ctx->pc) {
        case 0x3b41f8u: goto label_3b41f8;
        case 0x3b4214u: goto label_3b4214;
        case 0x3b4228u: goto label_3b4228;
        case 0x3b4234u: goto label_3b4234;
        case 0x3b4258u: goto label_3b4258;
        case 0x3b4268u: goto label_3b4268;
        default: break;
    }

    ctx->pc = 0x3b41b8u;

    // 0x3b41b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b41b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b41bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b41bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b41c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b41c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b41c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3b41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3b41c8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3b41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3b41cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b41ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3b41d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b41d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b41d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b41d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b41d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b41dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b41dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b41e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b41e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b41e4: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3b41e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x3b41e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b41ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b41ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b41f0: 0xc0e9e2a  jal         func_3A78A8
    ctx->pc = 0x3B41F0u;
    SET_GPR_U32(ctx, 31, 0x3B41F8u);
    ctx->pc = 0x3B41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41F0u;
    // 0x3b41f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A78A8u, 0x3B41F0u, 0x3B41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41F8u;
label_3b41f8:
    // 0x3b41f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B41F8u;
    {
        const bool branch_taken_0x3b41f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41F8u;
        // 0x3b41fc: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b41f8) {
            ctx->pc = 0x3B4208u;
            goto label_3b4208;
        }
    }
    ctx->pc = 0x3B4200u;
    // 0x3b4200: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B4200u;
    {
        const bool branch_taken_0x3b4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4200u;
        // 0x3b4204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4200) {
            ctx->pc = 0x3B427Cu;
            goto label_3b427c;
        }
    }
    ctx->pc = 0x3B4208u;
label_3b4208:
    // 0x3b4208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b4208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b420c: 0xc0ecfda  jal         func_3B3F68
    ctx->pc = 0x3B420Cu;
    SET_GPR_U32(ctx, 31, 0x3B4214u);
    ctx->pc = 0x3B4210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B420Cu;
    // 0x3b4210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3F68u, 0x3B420Cu, 0x3B4214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4214u;
label_3b4214:
    // 0x3b4214: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B4214u;
    {
        const bool branch_taken_0x3b4214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4214u;
        // 0x3b4218: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4214) {
            ctx->pc = 0x3B4248u;
            goto label_3b4248;
        }
    }
    ctx->pc = 0x3B421Cu;
    // 0x3b421c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4220: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3B4220u;
    SET_GPR_U32(ctx, 31, 0x3B4228u);
    ctx->pc = 0x3B4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4220u;
    // 0x3b4224: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3B4220u, 0x3B4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4228u;
label_3b4228:
    // 0x3b4228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b4228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b422c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3B422Cu;
    SET_GPR_U32(ctx, 31, 0x3B4234u);
    ctx->pc = 0x3B4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B422Cu;
    // 0x3b4230: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3B422Cu, 0x3B4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4234u;
label_3b4234:
    // 0x3b4234: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b4234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b4238: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b4238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b423c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b4240: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b4240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b4244: 0x0  nop
    ctx->pc = 0x3b4244u;
    // NOP
label_3b4248:
    // 0x3b4248: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B4248u;
    {
        const bool branch_taken_0x3b4248 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4248u;
        // 0x3b424c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4248) {
            ctx->pc = 0x3B4270u;
            goto label_3b4270;
        }
    }
    ctx->pc = 0x3B4250u;
    // 0x3b4250: 0xc0ecd30  jal         func_3B34C0
    ctx->pc = 0x3B4250u;
    SET_GPR_U32(ctx, 31, 0x3B4258u);
    ctx->pc = 0x3B4254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4250u;
    // 0x3b4254: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B34C0u, 0x3B4250u, 0x3B4258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4258u;
label_3b4258:
    // 0x3b4258: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4258u;
    {
        const bool branch_taken_0x3b4258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4258u;
        // 0x3b425c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4258) {
            ctx->pc = 0x3B427Cu;
            goto label_3b427c;
        }
    }
    ctx->pc = 0x3B4260u;
    // 0x3b4260: 0xc0e9e5c  jal         func_3A7970
    ctx->pc = 0x3B4260u;
    SET_GPR_U32(ctx, 31, 0x3B4268u);
    ctx->pc = 0x3B4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4260u;
    // 0x3b4264: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B4260u, 0x3B4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4268u;
label_3b4268:
    // 0x3b4268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4268u;
    {
        const bool branch_taken_0x3b4268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4268u;
        // 0x3b426c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4268) {
            ctx->pc = 0x3B427Cu;
            goto label_3b427c;
        }
    }
    ctx->pc = 0x3B4270u;
label_3b4270:
    // 0x3b4270: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3b4270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x3b4274: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3b4274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3b4278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b427c:
    // 0x3b427c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3b427cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4280: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3b4280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b4284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b4288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b428c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B428Cu;
        // 0x3b4290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4294u;
    // 0x3b4294: 0x0  nop
    ctx->pc = 0x3b4294u;
    // NOP
    ctx->pc = 0x3b4298u;
}
