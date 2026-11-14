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

// Function: sub_00414770
// Address: 0x414770 - 0x414878
void sub_00414770_0x414770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414770_0x414770");
#endif

    ctx->pc = 0x414770u;

    // 0x414770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x414770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x414774: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x414774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x414778: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x414778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41477c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x414780: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x414780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x414784: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x414784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
    // 0x414788: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x414788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41478c: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x41478cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x414790: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x414790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x414794: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x414794u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x414798: 0x3c13002f  lui         $s3, 0x2F
    ctx->pc = 0x414798u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47 << 16));
    // 0x41479c: 0x26101830  addiu       $s0, $s0, 0x1830
    ctx->pc = 0x41479cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6192));
    // 0x4147a0: 0x26314de8  addiu       $s1, $s1, 0x4DE8
    ctx->pc = 0x4147a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19944));
    // 0x4147a4: 0x26524e30  addiu       $s2, $s2, 0x4E30
    ctx->pc = 0x4147a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20016));
    // 0x4147a8: 0x26733080  addiu       $s3, $s3, 0x3080
    ctx->pc = 0x4147a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12416));
    // 0x4147ac: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x4147acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x4147b0: 0x24421020  addiu       $v0, $v0, 0x1020
    ctx->pc = 0x4147b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4128));
    // 0x4147b4: 0xac7000f4  sw          $s0, 0xF4($v1)
    ctx->pc = 0x4147b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x61E974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E974u, _value); } while (0);
    // 0x4147b8: 0xac7100f8  sw          $s1, 0xF8($v1)
    ctx->pc = 0x4147b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x61E978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E978u, _value); } while (0);
    // 0x4147bc: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x4147bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x4147c0: 0xac7200fc  sw          $s2, 0xFC($v1)
    ctx->pc = 0x4147c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x61E97Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E97Cu, _value); } while (0);
    // 0x4147c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x4147c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x4147c8: 0xac730100  sw          $s3, 0x100($v1)
    ctx->pc = 0x4147c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x61E980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E980u, _value); } while (0);
    // 0x4147cc: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x4147ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x4147d0: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x4147d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x4147d4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x4147d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x4147d8: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x4147d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x4147dc: 0x3c0a0041  lui         $t2, 0x41
    ctx->pc = 0x4147dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65 << 16));
    // 0x4147e0: 0x3c0b0041  lui         $t3, 0x41
    ctx->pc = 0x4147e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65 << 16));
    // 0x4147e4: 0x3c0c002f  lui         $t4, 0x2F
    ctx->pc = 0x4147e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)47 << 16));
    // 0x4147e8: 0x3c0d002f  lui         $t5, 0x2F
    ctx->pc = 0x4147e8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)47 << 16));
    // 0x4147ec: 0x3c0e002f  lui         $t6, 0x2F
    ctx->pc = 0x4147ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)47 << 16));
    // 0x4147f0: 0x3c0f0041  lui         $t7, 0x41
    ctx->pc = 0x4147f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65 << 16));
    // 0x4147f4: 0x24840f88  addiu       $a0, $a0, 0xF88
    ctx->pc = 0x4147f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3976));
    // 0x4147f8: 0x24a56200  addiu       $a1, $a1, 0x6200
    ctx->pc = 0x4147f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25088));
    // 0x4147fc: 0x24c61718  addiu       $a2, $a2, 0x1718
    ctx->pc = 0x4147fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5912));
    // 0x414800: 0x24e71df8  addiu       $a3, $a3, 0x1DF8
    ctx->pc = 0x414800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7672));
    // 0x414804: 0x25081310  addiu       $t0, $t0, 0x1310
    ctx->pc = 0x414804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4880));
    // 0x414808: 0x25291a90  addiu       $t1, $t1, 0x1A90
    ctx->pc = 0x414808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6800));
    // 0x41480c: 0x254a4eb0  addiu       $t2, $t2, 0x4EB0
    ctx->pc = 0x41480cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20144));
    // 0x414810: 0x256b4e78  addiu       $t3, $t3, 0x4E78
    ctx->pc = 0x414810u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20088));
    // 0x414814: 0x258c2090  addiu       $t4, $t4, 0x2090
    ctx->pc = 0x414814u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8336));
    // 0x414818: 0x25ad15d0  addiu       $t5, $t5, 0x15D0
    ctx->pc = 0x414818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 5584));
    // 0x41481c: 0x25ce1c40  addiu       $t6, $t6, 0x1C40
    ctx->pc = 0x41481cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 7232));
    // 0x414820: 0x25ef4d78  addiu       $t7, $t7, 0x4D78
    ctx->pc = 0x414820u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 19832));
    // 0x414824: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x414824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E984u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E984u, _value); } while (0);
    // 0x414828: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x414828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41482c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x414830: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x414830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414834: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x414834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414838: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x414838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41483c: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x41483cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61E944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E944u, _value); } while (0);
    // 0x414840: 0xac6500c8  sw          $a1, 0xC8($v1)
    ctx->pc = 0x414840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E948u, _value); } while (0);
    // 0x414844: 0xac6600cc  sw          $a2, 0xCC($v1)
    ctx->pc = 0x414844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x61E94Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E94Cu, _value); } while (0);
    // 0x414848: 0xac6700d0  sw          $a3, 0xD0($v1)
    ctx->pc = 0x414848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x61E950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E950u, _value); } while (0);
    // 0x41484c: 0xac6800d4  sw          $t0, 0xD4($v1)
    ctx->pc = 0x41484cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x61E954u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E954u, _value); } while (0);
    // 0x414850: 0xac6900d8  sw          $t1, 0xD8($v1)
    ctx->pc = 0x414850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x61E958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E958u, _value); } while (0);
    // 0x414854: 0xac6a00dc  sw          $t2, 0xDC($v1)
    ctx->pc = 0x414854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x61E95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E95Cu, _value); } while (0);
    // 0x414858: 0xac6b00e0  sw          $t3, 0xE0($v1)
    ctx->pc = 0x414858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x61E960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E960u, _value); } while (0);
    // 0x41485c: 0xac6c00e4  sw          $t4, 0xE4($v1)
    ctx->pc = 0x41485cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x61E964u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E964u, _value); } while (0);
    // 0x414860: 0xac6d00e8  sw          $t5, 0xE8($v1)
    ctx->pc = 0x414860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x61E968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E968u, _value); } while (0);
    // 0x414864: 0xac6e00ec  sw          $t6, 0xEC($v1)
    ctx->pc = 0x414864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x61E96Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E96Cu, _value); } while (0);
    // 0x414868: 0xac6f00f0  sw          $t7, 0xF0($v1)
    ctx->pc = 0x414868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x61E970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E970u, _value); } while (0);
    // 0x41486c: 0x3e00008  jr          $ra
    ctx->pc = 0x41486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41486Cu;
        // 0x414870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41486Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414874u;
    // 0x414874: 0x0  nop
    ctx->pc = 0x414874u;
    // NOP
    ctx->pc = 0x414878u;
}
